#include "Fighter_MJ1_Gecko_Council.h"

Fighter_MJ1_Gecko_Council::Fighter_MJ1_Gecko_Council() :
	hull_strength_(4100),
	max_shield_class_(8),
	cargo_space_(45),
	max_impulse_speed_(80),
	price_(980000) {

}

Fighter_MJ1_Gecko_Council::Fighter_MJ1_Gecko_Council(const std::string& faction):
	SpaceShip(faction),
	hull_strength_(4100),
	max_shield_class_(8),
	cargo_space_(45),
	max_impulse_speed_(80),
	price_(980000) {

}

void Fighter_MJ1_Gecko_Council::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Fighter_MJ1_Gecko_Council::GetHullStrength() const {
	return hull_strength_;
}

void Fighter_MJ1_Gecko_Council::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Fighter_MJ1_Gecko_Council::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Fighter_MJ1_Gecko_Council::GetCargoSpace() const {
	return cargo_space_;
}

int Fighter_MJ1_Gecko_Council::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Fighter_MJ1_Gecko_Council::GetPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Fighter_MJ1_Gecko_Council& ship) {
	out << "\n";
	out << "Name: " << "Fighter MJ1 Gecko Council" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}
