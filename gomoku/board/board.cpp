#include <gomoku/board/board.hpp>

Board::Board(int width)
	: _width(width)
	, _values(_width * _width)
{}

std::vector<int> Board::values() const
{
	return _values;
}

void Board::update_value(int index, int value)
{
	_values[index] = value;
}