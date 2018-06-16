#include "SpaceShip.h"

SpaceShip::SpaceShip() {

}

SpaceShip::SpaceShip(const std::string faction) :
	faction_(faction) {

}

std::string SpaceShip::GetFaction() const {
	return faction_;
}

void SpaceShip::SetFaction(const std::string& faction) {
	faction_ = faction;
}


void SpaceShip::ListCargo() {
	std::cout << "Cargo list:" << "\n";
	for (auto it = cargo_v.cbegin(); it != cargo_v.cend(); ++it) {
		AboutCargo(*it);
		std::cout << "-------------" << "\n";
	}
}

void SpaceShip::ListEngine() {
	std::cout << "Engine list:" << "\n";
	for (auto it = engine_m.cbegin(); it != engine_m.cend(); ++it) {
		AboutEngine(it->second);
		std::cout << "-------------" << "\n";
	}
}

void SpaceShip::ListShield() {
	std::cout << "Shield list:" << "\n";
	for (auto it = shield_v.cbegin(); it != shield_v.cend(); ++it) {
		AboutShield(*it);
		std::cout << "-------------" << "\n";
	}
}

void SpaceShip::ListWeapon() {
	std::cout << "Weapon list:" << "\n";
	for (auto it = guns_m.cbegin(); it != guns_m.cend(); ++it) {
		AboutWeapon(it->second);
		std::cout << "-------------" << "\n";
	}
		
}


//Cargo
void SpaceShip::AddCargo(const Cargo& cargo) {
	cargo_v.push_back(cargo);
}

void SpaceShip::RemoveCargo() {
	if (cargo_v.empty()) {
		std::cout << "Your cargo is empty!!!" << "\n";
	}
	else {
		cargo_v.pop_back();
	}
}

void SpaceShip::AboutCargo(const Cargo& cargo) {
	std::cout << "\n";
	std::cout << "Name: " << cargo.GetCargoName() << "\n";
	std::cout << "Faction: " << cargo.GetFactionName() << "\n";
}


//Engine
void SpaceShip::AddEngine(const Engine& engie) {
	engine_m.insert(std::make_pair(++engine_count,engie));
}


void SpaceShip::RemoveEngine() {
	if (engine_m.empty()) {
		std::cout << "You don't have any engine on ship you cant fly!!!" << "\n";
	}
	else {
		engine_m.erase(engine_count);
		--engine_count; //i need to decrement num of engine's becouse i removed one
	}
}

void SpaceShip::AboutEngine(const Engine& engine) {
	std::cout << "\n";
	std::cout << "Name: " << engine.GetEngineName() << "\n";
	std::cout << "Faction: " << engine.GetFactionName() << "\n";
}

//Shield
void SpaceShip::AddShield(const Shield& shield) {
	shield_v.push_back(shield);
}

void SpaceShip::RemoveShield() {
	if (shield_v.empty()) {
		std::cout << "You don't have shield, be careful when you enter open space!!!" << "\n";
	}
	else {
		shield_v.pop_back();
	}
}

void SpaceShip::AboutShield(const Shield& shield) {
	std::cout << "\n";
	std::cout << "Name: " << shield.GetName() << "\n";
	std::cout << "Faction: " << shield.GetFactionName() << "\n";
}

//Weapon
void SpaceShip::AddWeapon(const Weapon& weapon) {
	guns_m.insert(std::make_pair(++guns_count,weapon));
}

void SpaceShip::RemoveWeapon() {
	if (guns_m.empty()) {
		std::cout << "There is no more guns to remov!!!" << "\n";
	}
	else {
		guns_m.erase(guns_count);
		--guns_count; //i need to decrement num of guns becouse i removed one
	}
}

void SpaceShip::AboutWeapon(const Weapon& weapon) {
	std::cout << "\n";
	std::cout << "Name: " << weapon.GetName() << "\n";
	std::cout << "Faction: " << weapon.GetFactionName() << "\n";
}