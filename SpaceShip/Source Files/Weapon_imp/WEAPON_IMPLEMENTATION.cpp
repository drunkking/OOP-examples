#include "Weapon.h"

Weapon::Weapon() {

}

Weapon::Weapon(const std::string name, const std::string faction_name, const int price) :
	name_(name),
	faction_name_(faction_name),
    price_(price){

}

void Weapon::SetName(const std::string& name) {
	name_ = name;
}

std::string Weapon::GetName() const {
	return name_;
}

void Weapon::SetFactionName(const std::string& faction_name) {
	faction_name_ = faction_name;
}

std::string Weapon::GetFactionName() const {
	return faction_name_;
}

int Weapon::GetWeaponPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Weapon& weapon) {
	out << "Name: " << weapon.GetName() << "\n";
	out << "Fraction name: " << weapon.GetFactionName() << "\n";
	return out;
}