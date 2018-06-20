#include "Gunboat_Kusari_Ashikaga.h"

Gunboat_Kusari_Ashikaga::Gunboat_Kusari_Ashikaga() :
	hull_strength_(115000),
	max_shield_class_(5),
	cargo_space_(350),
	max_impulse_speed_(80) {

}

Gunboat_Kusari_Ashikaga::Gunboat_Kusari_Ashikaga(const std::string& faction, const int& price):
	SpaceShip(faction, price),
	hull_strength_(115000),
	max_shield_class_(5),
	cargo_space_(350),
	max_impulse_speed_(80) {

}

void Gunboat_Kusari_Ashikaga::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Gunboat_Kusari_Ashikaga::GetHullStrength() const {
	return hull_strength_;
}

void Gunboat_Kusari_Ashikaga::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Gunboat_Kusari_Ashikaga::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Gunboat_Kusari_Ashikaga::GetCargoSpace() const {
	return cargo_space_;
}

int Gunboat_Kusari_Ashikaga::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Gunboat_Kusari_Ashikaga::GetPrice() const {
	return SpaceShip::price_;
}

std::ostream& operator<< (std::ostream& out, const Gunboat_Kusari_Ashikaga& ship) {
	out << "\n";
	out << "Name: " << "Gunboat Kusari Ashikaga" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}
