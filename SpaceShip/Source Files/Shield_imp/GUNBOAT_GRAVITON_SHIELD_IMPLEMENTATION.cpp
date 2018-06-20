#include "Gunboat_Graviton_Shield.h"


Gunboat_Graviton_Shield::Gunboat_Graviton_Shield() {

}

Gunboat_Graviton_Shield::Gunboat_Graviton_Shield(const std::string name, const std::string faction_name, const int price) :
	Shield(name, faction_name, price) {

}

int Gunboat_Graviton_Shield::GetCapacity() const {
	return capacity_;
}

int Gunboat_Graviton_Shield::GetRegenDelay() const {
	return regen_delay_;
}

int Gunboat_Graviton_Shield::GetRegenerationRate() const {
	return regeneration_rate_;
}

int Gunboat_Graviton_Shield::GetRegenPower() const {
	return regen_power_;
}

int Gunboat_Graviton_Shield::GetPrice() const {
	return Shield::price_;
}

std::ostream& operator<< (std::ostream& out, const Gunboat_Graviton_Shield& shield) {
	out << "Name: " << "Gunboat Graviton Shield" << "\n";
	out << "Faction name: " << shield.GetFactionName() << "\n";
	out << "Capacity: " << shield.GetCapacity() << "\n";
	out << "Regen delay: " << shield.GetRegenDelay() << "\n";
	out << "Regeneration rate: " << shield.GetRegenerationRate() << "\n";
	out << "Regen power: " << shield.GetRegenPower() << "\n";
	return out;
}


