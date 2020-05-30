#include <gomoku/history/history.hpp>

History::History()
    : _actions{}
    , current_action{}
{}

void History::push_action()
{
    _actions.push(current_action);
    current_action = Action{};
}

Action History::pop_action()
{
    Action last_action = _actions.top();
    _actions.pop();
    return last_action;
}
