#include "CG6S_Pavise_Transport_Shield.h"

CG6S_Pavise_Transport_Shield::CG6S_Pavise_Transport_Shield() {

}

CG6S_Pavise_Transport_Shield::CG6S_Pavise_Transport_Shield(const std::string name, const std::string faction_name, const int price) :
	Shield(name, faction_name, price) {

}

int CG6S_Pavise_Transport_Shield::GetCapacity() const {
	return capacity_;
}

int CG6S_Pavise_Transport_Shield::GetRegenDelay() const {
	return regen_delay_;
}

int CG6S_Pavise_Transport_Shield::GetRegenerationRate() const {
	return regeneration_rate_;
}

int CG6S_Pavise_Transport_Shield::GetRegenPower() const {
	return regen_power_;
}

int CG6S_Pavise_Transport_Shield::GetPrice() const {
	return Shield::price_;
}

std::ostream&  operator<< (std::ostream& out, const CG6S_Pavise_Transport_Shield& shield) {
	out << "Name: " << "CG6S Pavise Transport Shield" << "\n";
	out << "Faction name: " << shield.GetFactionName() << "\n";
	out << "Capacity: " << shield.GetCapacity() << "\n";
	out << "Regen delay: " << shield.GetRegenDelay() << "\n";
	out << "Regeneration rate: " << shield.GetRegenerationRate() << "\n";
	out << "Regen power: " << shield.GetRegenPower() << "\n";
	return out;
}