#include "HUMAN_DEQUE_MANIPULATION.h"


int main() {
	std::deque<Human> ljudi;


	AddMoreHumans(ljudi, 2);
	PrintHumans(ljudi);

	ljudi.at(0).AddMoreElemToInventory(4);
	ljudi.at(1).AddMoreElemToInventory(2);

	PrintHumansInventory(ljudi);

	ljudi.at(0).Trade(ljudi.at(1), "cigla");

	PrintHumansInventory(ljudi);

	getchar();
	getchar();

	return 0;
}