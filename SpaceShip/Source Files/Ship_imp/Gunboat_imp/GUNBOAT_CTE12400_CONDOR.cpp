#include "Gunboat_CTE12400_Condor.h"

Gunboat_CTE12400_Condor::Gunboat_CTE12400_Condor() :
	hull_strength_(125000),
	max_shield_class_(8),
	cargo_space_(450),
	max_impulse_speed_(80),
	price_(30000000) {

}

Gunboat_CTE12400_Condor::Gunboat_CTE12400_Condor(const std::string& faction) :
	SpaceShip(faction),
	hull_strength_(125000),
	max_shield_class_(8),
	cargo_space_(450),
	max_impulse_speed_(80),
	price_(30000000) {

}

void Gunboat_CTE12400_Condor::SetHullStrength(const double& hull_strength) {
	hull_strength_ = hull_strength;
}

double Gunboat_CTE12400_Condor::GetHullStrength() const {
	return hull_strength_;
}

void Gunboat_CTE12400_Condor::SetMaxShiledClass(const int& max_shield_class) {
	max_shield_class_ = max_shield_class;
}

int Gunboat_CTE12400_Condor::GetMaxShieldClass() const {
	return max_shield_class_;
}

int Gunboat_CTE12400_Condor::GetCargoSpace() const {
	return cargo_space_;
}

int Gunboat_CTE12400_Condor::GetMaxImpulseSpeed() const {
	return max_impulse_speed_;
}

int Gunboat_CTE12400_Condor::GetPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Gunboat_CTE12400_Condor& ship) {
	out << "\n";
	out << "Name: " << "Gunboat CTE12400 Condor" << "\n";
	out << "Hull strength: " << ship.GetHullStrength() << "\n";
	out << "Max Shield class: " << ship.GetMaxShieldClass() << "\n";
	out << "Cargo space: " << ship.GetCargoSpace() << "\n";
	out << "Max Impulse speed: " << ship.GetMaxImpulseSpeed() << "\n";
	out << "Price: " << ship.GetPrice() << "\n";
	return out;
}
