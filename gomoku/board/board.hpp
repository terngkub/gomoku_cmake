#pragma once
#include <vector>

class Board
{
	int _width;
	std::vector<int> _values;

public:
	Board() = delete;
	Board(int width);

	std::vector<int> values() const;

	void update_value(int index, int value);
};
