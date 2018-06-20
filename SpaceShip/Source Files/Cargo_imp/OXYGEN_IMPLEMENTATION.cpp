#include "Oxygen.h"
#include <iostream>

Oxygen::Oxygen() {

}

Oxygen::Oxygen(std::string name, const std::string faction_name, const int price) :
	Cargo(name, faction_name, price) {

}

int Oxygen::GetAtomicNumber() const {
	return atomic_number_;
}

double Oxygen::GetRelativeAtomicMass() const {
	return relative_atomic_mass_;
}

std::string Oxygen::GetStateAt20() const {
	return state_at_20_;
}

std::ostream& operator<< (std::ostream& out, const Oxygen& cargo) {
	out << "Name: " << "Oxygen" << "\n";
	out << "Faction name:" << cargo.GetFactionName() << "\n";
	out << "Atomic number: " << cargo.GetAtomicNumber() << "\n";
	out << "Relative atomic mass: " << cargo.GetRelativeAtomicMass() << "\n";
	out << "State at 20: " << cargo.GetStateAt20() << "\n";
	return out;
}