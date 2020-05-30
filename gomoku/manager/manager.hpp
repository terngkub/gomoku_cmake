#pragma once
#include <gomoku/board/board.hpp>
#include <gomoku/history/history.hpp>

class Manager
{
    Board _board;
    History _history;

public:
    Manager() = delete;
    Manager(int width);

    std::vector<int> board() const;

    void play(int index, int value);
    void undo();
};
