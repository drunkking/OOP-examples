#include "Cargo.h"
#include<iostream>

Cargo::Cargo() {

}

Cargo::Cargo(const std::string name, const std::string faction_name, const int price) :
	name_(name),
	faction_name_(faction_name),
    price_(price){

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

int Cargo::GetCargoPrice() const {
	return price_;
}

std::ostream& operator<< (std::ostream& out, const Cargo& cargo) {
	out << "Name: " << cargo.GetCargoName() << "\n";
	out << "Faction name: " << cargo.GetFactionName() << "\n";
	return out;
}