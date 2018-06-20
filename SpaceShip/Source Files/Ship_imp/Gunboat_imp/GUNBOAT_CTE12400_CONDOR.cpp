#include "Gunboat_CTE12400_Condor.h"

Gunboat_CTE12400_Condor::Gunboat_CTE12400_Condor() :
	hull_strength_(125000),
	max_shield_class_(8),
	cargo_space_(450),
	max_impulse_speed_(80) {

}
//kreiram objekatat std::string&, int& ne moram da prosledim referencu nema kopiranja
//mozda izbacim, nema veze sad 

Gunboat_CTE12400_Condor::Gunboat_CTE12400_Condor(const std::string& faction, const int& price) :
	SpaceShip(faction, price),
	hull_strength_(125000),
	max_shield_class_(8),
	cargo_space_(450),
	max_impulse_speed_(80){

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
	return SpaceShip::price_;
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