#include <gomoku/manager/manager.hpp>

Manager::Manager(int width)
    : _board{width}
    , _history{}
{}

std::vector<int> Manager::board() const
{
    return _board.values();
}

void Manager::play(int index, int value)
{
    _board.update_value(index, value);

    _history.current_action.index = index;
    _history.current_action.value = value;
    _history.push_action();
}

void Manager::undo()
{
    Action last_action = _history.pop_action();

    _board.update_value(last_action.index, 0);
}
