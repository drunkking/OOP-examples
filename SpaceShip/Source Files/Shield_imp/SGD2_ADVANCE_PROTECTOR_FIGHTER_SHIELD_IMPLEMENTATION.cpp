#include "SGD2_Advance_Protector_Fighter_Shield.h"

SGD2_Advance_Protector_Fighter_Shield::SGD2_Advance_Protector_Fighter_Shield() {

}

SGD2_Advance_Protector_Fighter_Shield::SGD2_Advance_Protector_Fighter_Shield(const std::string name, const std::string faction_name, const int price) :
	Shield(name, faction_name, price) {

}

int SGD2_Advance_Protector_Fighter_Shield::GetCapacity() const {
	return capacity_;
}

int SGD2_Advance_Protector_Fighter_Shield::GetRegenDelay() const {
	return regen_delay_;
}

int SGD2_Advance_Protector_Fighter_Shield::GetRegenerationRate() const {
	return regeneration_rate_;
}

int SGD2_Advance_Protector_Fighter_Shield::GetRegenPower() const {
	return regen_power_;
}

int SGD2_Advance_Protector_Fighter_Shield::GetPrice() const {
	return Shield::price_;
}

std::ostream& operator<< (std::ostream& out, const SGD2_Advance_Protector_Fighter_Shield& shield) {
	out << "Name: " << "SGD2 Advance Protector Fighter Shield" << "\n";
	out << "Faction name: " << shield.GetFactionName() << "\n";
	out << "Capacity: " << shield.GetCapacity() << "\n";
	out << "Regen delay: " << shield.GetRegenDelay() << "\n";
	out << "Regeneration rate: " << shield.GetRegenerationRate() << "\n";
	out << "Regen power: " << shield.GetRegenPower() << "\n";
	return out;
}

