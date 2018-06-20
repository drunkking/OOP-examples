#include "SpaceShip.h"

SpaceShip::SpaceShip() {

}

SpaceShip::SpaceShip(const std::string faction) :
	faction_(faction) {

}

SpaceShip::SpaceShip(const std::string faction, const int price) :
	faction_(faction),
	price_(price) {

}

std::string SpaceShip::GetFaction() const {
	return faction_;
}

void SpaceShip::SetFaction(const std::string& faction) {
	faction_ = faction;
}

int SpaceShip::GetShipPrice() const {
	return price_;
}

void SpaceShip::SetShipPrice(const int& price) {
	price_ = price;
}

//List
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
	price_ += cargo.GetCargoPrice();
	
}

void SpaceShip::RemoveCargo() {
	if (cargo_v.empty()) {
		std::cout << "Your cargo is empty!!!" << "\n";
	}
	else {
		price_ -= cargo_v.front().GetCargoPrice();
		cargo_v.pop_back();
	}
}

void SpaceShip::AboutCargo(const Cargo& cargo) {
	std::cout << "\n";
	std::cout << "Name: " << cargo.GetCargoName() << "\n";
	std::cout << "Faction: " << cargo.GetFactionName() << "\n";
	std::cout << "Price: " << cargo.GetCargoPrice() << "\n";
}


void SpaceShip::AboutCargo(const Radon& cargo) {
	std::cout << "\n";
	std::cout << "Name: " << "Radon" << "\n";
	std::cout << "Faction: " << cargo.GetFactionName() << "\n";
	std::cout << "Atomic_number: " << cargo.GetAtomicNumber() << "\n";
	std::cout << "Relative atomic mass: " << cargo.GetRelativeAtomicMass() << "\n";
	std::cout << "State at 20: " << cargo.GetStateAt20() << "\n";
	std::cout << "Price: " << cargo.GetCargoPrice() << "\n";
}

void SpaceShip::AboutCargo(const Xeon& cargo) {
	std::cout << "\n";
	std::cout << "Name: " << "Xeon" << "\n";
	std::cout << "Faction: " << cargo.GetFactionName() << "\n";
	std::cout << "Atomic_number: " << cargo.GetAtomicNumber() << "\n";
	std::cout << "Relative atomic mass: " << cargo.GetRelativeAtomicMass() << "\n";
	std::cout << "State at 20: " << cargo.GetStateAt20() << "\n";
	std::cout << "Price: " << cargo.GetCargoPrice() << "\n";
}

void SpaceShip::AboutCargo(const Oxygen& cargo) {
	std::cout << "\n";
	std::cout << "Name: " << "Oxygen" << "\n";
	std::cout << "Faction: " << cargo.GetFactionName() << "\n";
	std::cout << "Atomic_number: " << cargo.GetAtomicNumber() << "\n";
	std::cout << "Relative atomic mass: " << cargo.GetRelativeAtomicMass() << "\n";
	std::cout << "State at 20: " << cargo.GetStateAt20() << "\n";
	std::cout << "Price: " << cargo.GetCargoPrice() << "\n";
}



//Engine
void SpaceShip::AddEngine(const Engine& engine) {
	engine_m.insert(std::make_pair(++engine_count, engine));
	price_ += engine.GetEnginePrice();
}


void SpaceShip::RemoveEngine() {
	if (engine_m.empty()) {
		std::cout << "You don't have any engine on ship you cant fly!!!" << "\n";
	}
	else {
		price_ -= engine_m[engine_count].GetEnginePrice();
		engine_m.erase(engine_count);
		--engine_count; //i need to decrement num of engine's becouse i removed one
		
	}
}

void SpaceShip::AboutEngine(const Engine& engine) {
	std::cout << "\n";
	std::cout << "Name: " << engine.GetEngineName() << "\n";
	std::cout << "Faction: " << engine.GetFactionName() << "\n";
	std::cout << "Price: " << engine.GetEnginePrice() << "\n";
}

void SpaceShip::AboutEngine(const Nomad_F1G_Elipsion_Engine& engine) {
	std::cout << "\n";
	std::cout << "Name: " << "Nomad F1G Elipsion Engine" << "\n";
	std::cout << "Faction: " << engine.GetFactionName() << "\n";
	std::cout << "Power usage: " << engine.GetPowerUsage() << "\n";
	std::cout << "Radiation level: " << engine.GetRadiationLevel() << "\n";
	std::cout << "Price: " << engine.GetEnginePrice() << "\n";
}

void SpaceShip::AboutEngine(const AI_Auxiliary_Engine& engine) {
	std::cout << "\n";
	std::cout << "Name: " << "AI Auxiliary Engine" << "\n";
	std::cout << "Faction: " << engine.GetFactionName() << "\n";
	std::cout << "Power usage: " << engine.GetPowerUsage() << "\n";
	std::cout << "Radiation level: " << engine.GetRadiationLevel() << "\n";
	std::cout << "Price: " << engine.GetEnginePrice() << "\n";
}

void SpaceShip::AboutEngine(const Cheetah_ZZ8J_Engine& engine) {
	std::cout << "\n";
	std::cout << "Name: " << "Cheetah ZZ8J Engine" << "\n";
	std::cout << "Faction: " << engine.GetFactionName() << "\n";
	std::cout << "Power usage: " << engine.GetPowerUsage() << "\n";
	std::cout << "Radiation level: " << engine.GetRadiationLevel() << "\n";
	std::cout << "Price: " << engine.GetEnginePrice() << "\n";
}

//Shield
void SpaceShip::AddShield(const Shield& shield) {
	shield_v.push_back(shield);
	price_ += shield.GetShieldPrice();
}

void SpaceShip::RemoveShield() {
	if (shield_v.empty()) {
		std::cout << "You don't have shield, be careful when you enter open space!!!" << "\n";
	}
	else {
		price_ -= shield_v.front().GetShieldPrice();
		shield_v.pop_back();
	}
}

void SpaceShip::AboutShield(const Shield& shield) {
	std::cout << "\n";
	std::cout << "Name: " << shield.GetName() << "\n";
	std::cout << "Faction: " << shield.GetFactionName() << "\n";
	std::cout << "Price: " << shield.GetShieldPrice() << "\n";
}

void SpaceShip::AboutShield(const Gunboat_Graviton_Shield& shield) {
	std::cout << "\n";
	std::cout << "Name: " << "Gunboat Graviton Shield" << "\n";
	std::cout << "Faction: " << shield.GetFactionName() << "\n";
	std::cout << "Price: " << shield.GetShieldPrice() << "\n";
	std::cout << "Capacity: " << shield.GetCapacity() << "\n";
	std::cout << "Regen delay: " << shield.GetRegenDelay() << "\n";
	std::cout << "Regeneration rate: " << shield.GetRegenerationRate() << "\n";
	std::cout << "Regen power: " << shield.GetRegenPower() << "\n";
}

void SpaceShip::AboutShield(const CG6S_Pavise_Transport_Shield& shield) {
	std::cout << "\n";
	std::cout << "Name: " << "CG6S Pavise Transport Shield" << "\n";
	std::cout << "Faction: " << shield.GetFactionName() << "\n";
	std::cout << "Price: " << shield.GetShieldPrice() << "\n";
	std::cout << "Capacity: " << shield.GetCapacity() << "\n";
	std::cout << "Regen delay: " << shield.GetRegenDelay() << "\n";
	std::cout << "Regeneration rate: " << shield.GetRegenerationRate() << "\n";
	std::cout << "Regen power: " << shield.GetRegenPower() << "\n";
}

void SpaceShip::AboutShield(const SGD2_Advance_Protector_Fighter_Shield& shield) {
	std::cout << "\n";
	std::cout << "Name: " << "CG6S Pavise Transport Shield" << "\n";
	std::cout << "Faction: " << shield.GetFactionName() << "\n";
	std::cout << "Price: " << shield.GetShieldPrice() << "\n";
	std::cout << "Capacity: " << shield.GetCapacity() << "\n";
	std::cout << "Regen delay: " << shield.GetRegenDelay() << "\n";
	std::cout << "Regeneration rate: " << shield.GetRegenerationRate() << "\n";
	std::cout << "Regen power: " << shield.GetRegenPower() << "\n";
}


//Weapon
void SpaceShip::AddWeapon(const Weapon& weapon) {
	guns_m.insert(std::make_pair(++guns_count, weapon));
	price_ += weapon.GetWeaponPrice();
}

void SpaceShip::RemoveWeapon() {
	if (guns_m.empty()) {
		std::cout << "There is no more guns to remov!!!" << "\n";
	}
	else {
		price_ -= guns_m[guns_count].GetWeaponPrice();
		guns_m.erase(guns_count);
		--guns_count; //i need to decrement num of guns becouse i removed one
	}
}

void SpaceShip::AboutWeapon(const Weapon& weapon) {
	std::cout << "\n";
	std::cout << "Name: " << weapon.GetName() << "\n";
	std::cout << "Faction: " << weapon.GetFactionName() << "\n";
	std::cout << "Price: " << weapon.GetWeaponPrice() << "\n";
}

void SpaceShip::AboutWeapon(const EMP_7_Pulse_Cannon& weapon) {
	std::cout << "\n";
	std::cout << "Name: " << "EMP 7 Pulse Cannon" << "\n";
	std::cout << "Faction: " << weapon.GetFactionName() << "\n";
	std::cout << "Price: " << weapon.GetWeaponPrice() << "\n";
	std::cout << "Rotation: " << weapon.GetRotation() << "\n";
	std::cout << "Life time: " << weapon.GetLifeTime() << "\n";
	std::cout << "Travel range: " << weapon.GetTravelRange() << "\n";
	std::cout << "Speed: " << weapon.GetSpeed() << "\n";
	std::cout << "Damage: " << weapon.GetDamage() << "\n";
}

void SpaceShip::AboutWeapon(const H4Z_Brimstone_Helfire_Turret& weapon) {
	std::cout << "\n";
	std::cout << "Name: " << "H4Z Brimstone Helfire Turret" << "\n";
	std::cout << "Faction: " << weapon.GetFactionName() << "\n";
	std::cout << "Price: " << weapon.GetWeaponPrice() << "\n";
	std::cout << "Rotation: " << weapon.GetRotation() << "\n";
	std::cout << "Life time: " << weapon.GetLifeTime() << "\n";
	std::cout << "Travel range: " << weapon.GetTravelRange() << "\n";
	std::cout << "Speed: " << weapon.GetSpeed() << "\n";
	std::cout << "Damage: " << weapon.GetDamage() << "\n";
}

void SpaceShip::AboutWeapon(const Musket_Gallic_Tachyon_Cannon& weapon) {
	std::cout << "\n";
	std::cout << "Name: " << "Musket Gallic Tachyon Cannon" << "\n";
	std::cout << "Faction: " << weapon.GetFactionName() << "\n";
	std::cout << "Price: " << weapon.GetWeaponPrice() << "\n";
	std::cout << "Rotation: " << weapon.GetRotation() << "\n";
	std::cout << "Life time: " << weapon.GetLifeTime() << "\n";
	std::cout << "Travel range: " << weapon.GetTravelRange() << "\n";
	std::cout << "Speed: " << weapon.GetSpeed() << "\n";
}