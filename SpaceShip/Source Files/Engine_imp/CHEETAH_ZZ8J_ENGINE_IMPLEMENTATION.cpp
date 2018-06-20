#include "Cheetah_ZZ8J_Engine.h"

Cheetah_ZZ8J_Engine::Cheetah_ZZ8J_Engine() {

}

Cheetah_ZZ8J_Engine::Cheetah_ZZ8J_Engine(const std::string name, const std::string faction_name, const int price) :
	Engine(name, faction_name, price) {

}

int Cheetah_ZZ8J_Engine::GetPowerUsage() const {
	return power_usage_;
}

int Cheetah_ZZ8J_Engine::GetRadiationLevel() const {
	return radiation_level_;
}

int Cheetah_ZZ8J_Engine::GetPrice() const {
	return Engine::price_;
}

std::ostream& operator<< (std::ostream& out, const Cheetah_ZZ8J_Engine& engine) {
	out << "Name: " << "Cheetah ZZ8J Engine" << "\n";
	out << "Faction name: " << engine.GetFactionName() << "\n";
	out << "Power usage: " << engine.GetPowerUsage() << "\n";
	out << "Radiation level: " << engine.GetRadiationLevel() << "\n";
	out << "Price: " << engine.GetPrice() << "\n";
	return out;
}