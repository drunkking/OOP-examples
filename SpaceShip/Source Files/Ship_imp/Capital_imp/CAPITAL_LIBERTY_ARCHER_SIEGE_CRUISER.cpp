#include "Capital_Liberty_Archer_Siege_Cruiser.h"

Capital_Liberty_Archer_Siege_Cruiser::Capital_Liberty_Archer_Siege_Cruiser() :
	hull_strength_(295000),
	max_shield_class_(9),
	cargo_space_(800),
	max_impulse_speed_(70) {

}

Capital_Liberty_Archer_Siege_Cruiser::Capital_Liberty_Archer_Siege_Cruiser(const std::string& faction, const int& price):
	SpaceShip(faction, price),
	hull_strength_(295000),
	max_shield_class_(9),
	cargo_space_(800),
	max_impulse_speed_(70) {

}


void Capital_Liberty_Archer_Siege_Cruiser::SetHullStrength(const double& hull_strenght) {
	hull_strength_ = hull_strenght;
}

double Capital_Liberty_Archer_Siege_Cruiser::GetHullStrength() const {
	return hull_strength_;
}

void Capital_Liberty_Archer_Siege_Cruiser::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Capital_Liberty_Archer_Siege_Cruiser::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Capital_Liberty_Archer_Siege_Cruiser::GetCargoSpace() const {
	return cargo_space_;
}

int Capital_Liberty_Archer_Siege_Cruiser::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Capital_Liberty_Archer_Siege_Cruiser::GetPrice() const {
	return SpaceShip::price_;
}

std::ostream& operator<< (std::ostream& out, const Capital_Liberty_Archer_Siege_Cruiser& ship) {
	out << "\n";
	out << "Name: " << "Capital Liberty Archer Siege Cruiser" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}