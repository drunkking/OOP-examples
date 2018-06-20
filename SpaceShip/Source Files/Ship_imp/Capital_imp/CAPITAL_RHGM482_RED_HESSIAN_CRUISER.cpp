#include "Capital_RHGM482_Red_Hessian_Cruiser.h"

Capital_RHGM482_Red_Hessian_Cruiser::Capital_RHGM482_Red_Hessian_Cruiser() :
	hull_strength_(350000),
	max_shield_class_(9),
	cargo_space_(800),
	max_impulse_speed_(70) {

}

Capital_RHGM482_Red_Hessian_Cruiser::Capital_RHGM482_Red_Hessian_Cruiser(const std::string& faction, const int& price):
	SpaceShip(faction, price),
	hull_strength_(350000),
	max_shield_class_(9),
	cargo_space_(800),
	max_impulse_speed_(70) {

}

void Capital_RHGM482_Red_Hessian_Cruiser::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Capital_RHGM482_Red_Hessian_Cruiser::GetHullStrength() const {
	return  hull_strength_;
}

void Capital_RHGM482_Red_Hessian_Cruiser::SetMaxShiledClass(const int& max_sheild_class) {
	max_shield_class_ = max_sheild_class;
}

int Capital_RHGM482_Red_Hessian_Cruiser::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Capital_RHGM482_Red_Hessian_Cruiser::GetCargoSpace() const {
	return cargo_space_;
}

int Capital_RHGM482_Red_Hessian_Cruiser::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Capital_RHGM482_Red_Hessian_Cruiser::GetPrice() const {
	return SpaceShip::price_;
}


std::ostream& operator<< (std::ostream&  out, const Capital_RHGM482_Red_Hessian_Cruiser& ship) {
	out << "\n";
	out << "Name: " << "Capital_RHGM482_Red_Hessian_Cruiser" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}