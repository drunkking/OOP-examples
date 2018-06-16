#include "Gunboat_T883GB_Ahoudari.h"

Gunboat_T883GB_Ahoudari::Gunboat_T883GB_Ahoudari() :
	hull_strength_(115000),
	max_shield_class_(8),
	cargo_space_(430),
	max_impulse_speed_(80),
	price_(39000000) {

}

Gunboat_T883GB_Ahoudari::Gunboat_T883GB_Ahoudari(const std::string& faction) :
    SpaceShip(faction),
	hull_strength_(115000),
	max_shield_class_(8),
	cargo_space_(430),
	max_impulse_speed_(80),
	price_(39000000){

}

void Gunboat_T883GB_Ahoudari::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Gunboat_T883GB_Ahoudari::GetHullStrength() const {
	return hull_strength_;
}

void Gunboat_T883GB_Ahoudari::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Gunboat_T883GB_Ahoudari::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Gunboat_T883GB_Ahoudari::GetCargoSpace() const {
	return cargo_space_;
}

int Gunboat_T883GB_Ahoudari::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Gunboat_T883GB_Ahoudari::GetPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Gunboat_T883GB_Ahoudari& ship) {
	out << "\n";
	out << "Name: " << "Gunboat T883GB Ahoudari" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}