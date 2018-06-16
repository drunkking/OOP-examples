#include "Engine.h"


Engine::Engine(const std::string name, const std::string faction_name) :
	name_(name), faction_name_(faction_name) {

}

void Engine::SetEngineName(const std::string& name) {
	name_ = name;
}

std::string Engine::GetEngineName() const {
	return name_;
}

void Engine::SetFactionName(const std::string& faction_name) {
	faction_name_ = faction_name;
}

std::string Engine::GetFactionName() const {
	return faction_name_;
}

std::ostream& operator<< (std::ostream& out, const Engine& engine) {
	out << "Name: " << engine.GetEngineName() << "\n";
	out << "Fraction name: " << engine.GetFactionName() << "\n";
	return out;
}
