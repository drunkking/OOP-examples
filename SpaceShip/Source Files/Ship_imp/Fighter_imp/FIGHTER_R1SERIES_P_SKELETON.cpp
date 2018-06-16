#include "Fighter_R1SERIES_P_Skeleton.h"

Fighter_R1SERIES_P_Skeleton::Fighter_R1SERIES_P_Skeleton() :
	hull_strength_(4300),
	max_shield_class_(8),
	cargo_space_(50),
	max_impulse_speed_(80),
	price_(1395000) {

}

Fighter_R1SERIES_P_Skeleton::Fighter_R1SERIES_P_Skeleton(const std::string& faction):
	SpaceShip(faction),
	hull_strength_(4300),
	max_shield_class_(8),
	cargo_space_(50),
	max_impulse_speed_(80),
	price_(1395000) {

}

void Fighter_R1SERIES_P_Skeleton::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Fighter_R1SERIES_P_Skeleton::GetHullStrength() const {
	return hull_strength_;
}

void Fighter_R1SERIES_P_Skeleton::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Fighter_R1SERIES_P_Skeleton::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Fighter_R1SERIES_P_Skeleton::GetCargoSpace() const {
	return cargo_space_;
}

int Fighter_R1SERIES_P_Skeleton::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Fighter_R1SERIES_P_Skeleton::GetPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Fighter_R1SERIES_P_Skeleton& ship) {
	out << "\n";
	out << "Name: " << "Fighter R1SERIES P Skeleton" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}