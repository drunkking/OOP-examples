#include "Xeon.h"
#include <iostream>

Xeon::Xeon() {

}

Xeon::Xeon(std::string name, const std::string faction_name, const int price) :
	Cargo(name, faction_name, price) {

}

int Xeon::GetAtomicNumber() const {
	return atomic_number_;
}

double  Xeon::GetRelativeAtomicMass() const {
	return relative_atomic_mass_;
}

std::string Xeon::GetStateAt20() const {
	return state_at_20_;
}

std::ostream& operator<< (std::ostream& out, const Xeon& cargo) {
	out << "Name: " << "Xeon" << "\n";
	out << "Faction name:" << cargo.GetFactionName() << "\n";
	out << "Atomic number: " << cargo.GetAtomicNumber() << "\n";
	out << "Relative atomic mass: " << cargo.GetRelativeAtomicMass() << "\n";
	out << "State at 20: " << cargo.GetStateAt20() << "\n";
	return out;
}