#include <gomoku/manager/manager.hpp>
#include <iostream>

int main()
{
	Manager manager{3};

	manager.play(4, 1);

	for (auto i : manager.board())
		std::cout << i << ' ';
	std::cout << "\n\n";
	
	manager.play(5, 2);

	for (auto i : manager.board())
		std::cout << i << ' ';
	std::cout << "\n\n";

	manager.undo();

	for (auto i : manager.board())
		std::cout << i << ' ';
	std::cout << "\n";
}
