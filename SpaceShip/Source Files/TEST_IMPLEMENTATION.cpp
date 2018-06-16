#include "Test.h"

void Test::PrintCargo() {
	for (auto it = kargo.begin(); it != kargo.end(); ++it) {
		AboutCargo(*it);
	}
}

void Test::PringEngine() {
	for (auto it = motori.begin(); it != motori.end(); ++it) {
		AboutEngine(*it);
	}
}


void Test::PrintShield() {
	for (auto it = stit.begin(); it != stit.end(); ++it) {
		AboutShield(*it);
	}
}

void Test::PrintWeapon() {
	for (auto it = guns.begin(); it != guns.end(); ++it) {
		AboutWeapon(*it);
	}
}


//cargo
void Test::AddCargo(const Cargo& cargo) {
	kargo.push_back(cargo);
}

void Test::RemoveCargo() {
	kargo.pop_back();
}

void Test::AboutCargo(const Cargo& cargo) {
	std::cout << "Name: " << cargo.GetCargoName() << "\n";
	std::cout << "Faction: " << cargo.GetFactionName() << "\n";
}

//engine
void Test::AddEngine(const Engine& engine) {
	motori.push_back(engine);
}

void Test::RemoveEngine() {
	motori.pop_back();
}

void Test::AboutEngine(const Engine& engine) {
	std::cout << "Name: " << engine.GetEngineName() << "\n";
	std::cout << "Faction: " << engine.GetFactionName() << "\n";
}

//shield

void Test::AddShield(const Shield& shield) {
	stit.push_back(shield);
}

void Test::RemoveShield() {
	stit.pop_back();
}

void Test::AboutShield(const Shield& shield) {
	std::cout << "Name: " << shield.GetName() << "\n";
	std::cout << "Faction: " << shield.GetFactionName() << "\n";
}

//weapon

void Test::AddWeapon(const Weapon& weapon) {
	guns.push_back(weapon);
}

void Test::RemoveWeapon() {
	guns.pop_back();
}

void Test::AboutWeapon(const Weapon& weapon) {
	std::cout << "Name: " << weapon.GetName() << "\n";
	std::cout << "Faction: " << weapon.GetFactionName() << "\n";
}