#include "Fighter_RHGM17_Loki_Red_Hessian.h"

Fighter_RHGM17_Loki_Red_Hessian::Fighter_RHGM17_Loki_Red_Hessian() :
	hull_strength_(8400),
	max_shield_class_(9),
	cargo_space_(45),
	max_impulse_speed_(80),
	price_(1675000) {

}

Fighter_RHGM17_Loki_Red_Hessian::Fighter_RHGM17_Loki_Red_Hessian(const std::string& faction):
	SpaceShip(faction),
	hull_strength_(8400),
	max_shield_class_(9),
	cargo_space_(45),
	max_impulse_speed_(80),
	price_(1675000) {

}

void Fighter_RHGM17_Loki_Red_Hessian::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Fighter_RHGM17_Loki_Red_Hessian::GetHullStrength() const {
	return hull_strength_;
}

void Fighter_RHGM17_Loki_Red_Hessian::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Fighter_RHGM17_Loki_Red_Hessian::GetMaxShieldClass() const {
	return max_shield_class_;
}


int Fighter_RHGM17_Loki_Red_Hessian::GetCargoSpace() const {
	return cargo_space_;
}

int Fighter_RHGM17_Loki_Red_Hessian::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Fighter_RHGM17_Loki_Red_Hessian::GetPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Fighter_RHGM17_Loki_Red_Hessian& ship) {
	out << "\n";
	out << "Name: " << "Fighter RHGM17 Loki Red Hessian" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}