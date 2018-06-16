#include "ALL_SPACE_SHIPS.h"

int main() {

	Gunboat_CTE12400_Condor condor("Liberty");
	std::cout << condor.GetFaction();

	std::cout << condor;

	Gunboat_Kusari_Ashikaga ship("Nomads");
	std::cout << ship.GetFaction();
	std::cout << ship;

	Capital_Liberty_Archer_Siege_Cruiser battle("Libery");
	std::cout <<  battle.GetFaction();
	std::cout << battle;
	
	getchar();
	getchar();

	return 0;
}