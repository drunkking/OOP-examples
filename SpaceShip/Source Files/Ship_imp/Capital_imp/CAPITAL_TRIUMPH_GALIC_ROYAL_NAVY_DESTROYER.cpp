#include "Capital_Triumph_Galic_Royal_Navy_Destroyer.h"

Capital_Triumph_Galic_Royal_Navy_Destroyer::Capital_Triumph_Galic_Royal_Navy_Destroyer() :
	hull_strength_(275000),
	max_shield_class_(9),
	cargo_space_(700),
	max_impulse_speed_(70) {

}


Capital_Triumph_Galic_Royal_Navy_Destroyer::Capital_Triumph_Galic_Royal_Navy_Destroyer(const std::string& faction, const int& price) :
	SpaceShip(faction, price),
	hull_strength_(275000),
	max_shield_class_(9),
	cargo_space_(700),
	max_impulse_speed_(70) {

}

void Capital_Triumph_Galic_Royal_Navy_Destroyer::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Capital_Triumph_Galic_Royal_Navy_Destroyer::GetHullStrength() const {
	return hull_strength_;
}

void Capital_Triumph_Galic_Royal_Navy_Destroyer::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Capital_Triumph_Galic_Royal_Navy_Destroyer::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Capital_Triumph_Galic_Royal_Navy_Destroyer::GetCargoSpace() const {
	return cargo_space_;
}

int Capital_Triumph_Galic_Royal_Navy_Destroyer::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Capital_Triumph_Galic_Royal_Navy_Destroyer::GetPrice() const {
	return SpaceShip::price_;
}

std::ostream& operator<< (std::ostream& out, const Capital_Triumph_Galic_Royal_Navy_Destroyer& ship) {
	out << "\n";
	out << "Name: " << "Capital Triumph Galic Royal Navy Destroyer" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}