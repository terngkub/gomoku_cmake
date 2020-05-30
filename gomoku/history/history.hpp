#pragma once
#include <gomoku/history/action.hpp>
#include <stack>
#include <vector>

class History
{
    std::stack<Action> _actions;

public:
    History();

    Action current_action;

    void push_action();
    Action pop_action();
};
