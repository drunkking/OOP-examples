#include "Shield.h"

Shield::Shield(const std::string name, const std::string faction_name) :
	name_(name), faction_name_(faction_name) {

}

void Shield::SetName(const std::string& name) {
	name_ = name;
}

std::string Shield::GetName() const {
	return name_;
}

void Shield::SetFactionName(const std::string& faction_name) {
	faction_name_ = faction_name;
}

std::string Shield::GetFactionName() const {
	return faction_name_;
}

std::ostream& operator<< (std::ostream& out, const Shield& sheild) {
	out << "Name: " << sheild.GetName() << "\n";
	out << "Fraction name: " << sheild.GetFactionName() << "\n";
	return out;
}
