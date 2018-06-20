#include "ALL_SPACE_SHIPS.h"
#include "PRICE.h"
#include <memory>

enum BOOL {FALSE, TRUE};

const int NUM_OF_WEAPONS = 4;
const int NUM_OF_CARGO = 3;
const int NUM_OF_ENGINES = 2;
const int NUM_OF_SHIELDS = 1;

int main() {

	BOOL Quit = FALSE;
	int choiceShip = 0;
	int choiceEngine = 0;
	int choiceShield = 0;
	int choiceWeapon = 0;
	int choiceCargo = 0;

	std::unique_ptr<SpaceShip> ptr = nullptr;

	while (1) {

		std::cout << "Choose space ship:" << "\n";
		std::cout << "(1) Gunboat CTE12400 Condor   (4) Fighter MJ1 Gecko Council        (7) Capital Liberty Archer Siege Cruiser"  << "\n";
		std::cout << "(2) Gunboat Kusari Ashikaga   (5) Fighter R1SERIES P Skeleton      (8) Capital Triumph Galic Royal Navy Destroyer" << "\n";
		std::cout << "(3) Gunboat T883GB Ahoudari   (6) Fighter RHGM17 Loki Red Hessian  (9) Capital RHGM482 Red Hessian Cruiser " << "\n";
		std::cout << "\n";
		std::cout << "Enter your choice: ";
		std::cin >> choiceShip;

		switch (choiceShip)
		{
		case 1: ptr = std::make_unique<Gunboat_CTE12400_Condor>();
			ptr->SetShipPrice(GUNBOAT_CTE12400_CONDOR);
			break;
		case 2:  ptr = std::make_unique<Gunboat_Kusari_Ashikaga>();
			ptr->SetShipPrice(GUNBOAT_KUSARI_ASHIKAGA);
			break;
		case 3: ptr = std::make_unique<Gunboat_T883GB_Ahoudari>();
			ptr->SetShipPrice(GUNBOAT_T883GB_AHOUDARI);
			break;
		case 4:  ptr = std::make_unique<Fighter_MJ1_Gecko_Council>();
			ptr->SetShipPrice(FIGHTER_MJ1_GECKO_COUNCIL);
			break;
		case 5: ptr = std::make_unique<Fighter_R1SERIES_P_Skeleton>();
			ptr->SetShipPrice(FIGHTER_R1SERIES_P_SKELETON);
			break;
		case 6: ptr = std::make_unique<Fighter_RHGM17_Loki_Red_Hessian>();
			ptr->SetShipPrice(FIGHTER_RHGM17_LOKI_RED_HESSIAN);
			break;
		case 7: ptr = std::make_unique<Capital_Liberty_Archer_Siege_Cruiser>();
			ptr->SetShipPrice(CAPITAL_LIBERY_ARCHER_SIEAGE_CRUISER);
			break;
		case 8: ptr = std::make_unique<Capital_Triumph_Galic_Royal_Navy_Destroyer>();
			ptr->SetShipPrice(CAPITAL_TRIUMPH_GALIC_ROYAL_NAVY_DESTROYER);
			break;
		case 9: ptr = std::make_unique<Capital_RHGM482_Red_Hessian_Cruiser>();
			ptr->SetShipPrice(CAPITAL_RHGM482_RED_HESSIAN_CRUISER);
		default: Quit = TRUE;
			break;
		}

		if (Quit) {
			break;
		}
		
		for (int min = 1; min <= NUM_OF_ENGINES; ++min) {

			std::cout << "\n\n\n";
			std::cout << "On: " << min << "\n";
			std::cout << "Add Engine on your ship: " << "\n";
			std::cout << "(1) Nomad F1G_Elipsion Engine" << "\n";
			std::cout << "(2) AI Auxiliary Engine" << "\n";
			std::cout << "(3) Cheetah ZZ8J Engine" << "\n";
			std::cout << "Enter your choice: ";
			std::cin >> choiceEngine;

			switch (choiceEngine)
			{
			case 1: ptr->AddEngine(Nomad_F1G_Elipsion_Engine("Nomad F1G Elipsion", "None", NOMAD_F1G_ELIPSON));
				break;
			case 2: ptr->AddEngine(AI_Auxiliary_Engine("AI Auxiliary", "None", AI_AUXILIARY));
				break;
			case 3: ptr->AddEngine(Cheetah_ZZ8J_Engine("Cheetah ZZ8J Engine", "None", CHEETAH_ZZ8J));
				break;
			default:
				std::cout << "ERROR\n";
				break;
			}
		}

		for (int min = 1; min <= NUM_OF_SHIELDS; ++min) {

			std::cout << "\n\n\n";
			std::cout << "On: " << min << "\n";
			std::cout << "Add Shield on your ship: " << "\n";
			std::cout << "(1) Gunboat Graviton Shield" << "\n";
			std::cout << "(2) CG6S Pavise Transport Shield" << "\n";
			std::cout << "(3) SGD2 Advance Protector Fighter Shield" << "\n";
			std::cout << "Enter your choice: ";
			std::cin >> choiceShield;

			switch (choiceShield)
			{
			case 1: ptr->AddShield(Gunboat_Graviton_Shield("Gunboat Graviton", "None", GUNBOAT_GRAVITATION));
				break;
			case 2: ptr->AddShield(CG6S_Pavise_Transport_Shield("CG6S Pavise Transport", "None", CG6S_PAVISE_TRANSPORT));
				break;
			case 3: ptr->AddShield(SGD2_Advance_Protector_Fighter_Shield("SGD2 Advance Protector Fighter", "None", SGD2_ADVANCE_PROTECTOR_FIGHTER));
				break;
			default:
				std::cout << "ERROR\n";
				break;
			}
		}

		for (int min = 1; min <= NUM_OF_WEAPONS; ++min) {

			std::cout << "\n\n\n";
			std::cout << "On: " << min << "\n";
			std::cout << "Add Weapons on your ship: " << "\n";
			std::cout << "(1) EMP 7 Pulse Cannon" << "\n";
			std::cout << "(2) H4Z Brimstone Helfire Turret" << "\n";
			std::cout << "(3) Musket Gallic Tachyon Cannon" << "\n";
			std::cout << "Enter your choice: ";
			std::cin >> choiceWeapon;

			switch (choiceWeapon)
			{
			case 1: ptr->AddWeapon(EMP_7_Pulse_Cannon("EMP 7 Pulse Cannon", "None", EMP_7_PULSE_CANNON));
				break;
			case 2: ptr->AddWeapon(H4Z_Brimstone_Helfire_Turret("H4Z Brimstone Helfire Turret", "None", H4Z_BRIMSTONE_HELFIRE));
				break;
			case 3: ptr->AddWeapon(Musket_Gallic_Tachyon_Cannon("Musket Gallic Tachyon Cannon", "None", MUSKET_GALIC_TACHYON));
				break;
			default:
				std::cout << "ERROR\n";
				break;
			}
		}

		for (int min = 1; min <= NUM_OF_CARGO; ++min) {

			std::cout << "\n\n\n";
			std::cout << "On: " << min << "\n";
			std::cout << "Add cargo:" << "\n";
			std::cout << "(1) Oxygen" << "\n";
			std::cout << "(2) Radon" << "\n";
			std::cout << "(3) Xeon" << "\n";
			std::cout << "Enter your choice: ";
			std::cin >> choiceCargo;

			switch (choiceCargo)
			{
			case 1: ptr->AddCargo(Oxygen("Oxygen", "None", OXYGEN));
				break;
			case 2: ptr->AddCargo(Radon("Radon", "None", RADON));
				break;
			case 3: ptr->AddCargo(Xeon("Xeon", "None", XEON));
				break;
			default:
				std::cout << "ERROR\n";
				break;
			}
		}

		ptr->ListEngine();
		ptr->ListShield();
		ptr->ListWeapon();
		ptr->ListCargo();

		std::cout << "Ship price: " << ptr->GetShipPrice() << "\n";

		getchar();
		getchar();

		Quit = TRUE;
		if (Quit) {
			break;
		}
	}



	return 0;
}