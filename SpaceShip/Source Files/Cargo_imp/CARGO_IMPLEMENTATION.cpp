#include "Cargo.h"

Cargo::Cargo(const std::string name, const std::string faction_name) :
	name_(name), faction_name_(faction_name) {

}

void Cargo::SetName(const std::string& name) {
	name_ = name;
}

std::string Cargo::GetCargoName() const {
	return name_;
}

void Cargo::SetFactionName(const std::string& faction_name) {
	faction_name_ = faction_name;
}

std::string Cargo::GetFactionName() const {
	return faction_name_;
}

std::ostream& operator<< (std::ostream& out, const Cargo& cargo) {
	out << "Name: " << cargo.GetCargoName() << "\n";
	out << "Fraction name: " << cargo.GetFactionName() << "\n";
	return out;
}
