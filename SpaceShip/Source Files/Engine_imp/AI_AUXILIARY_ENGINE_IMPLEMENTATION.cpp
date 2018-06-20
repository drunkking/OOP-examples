#include "AI_Auxiliary_Engine.h"

AI_Auxiliary_Engine::AI_Auxiliary_Engine() {

}

AI_Auxiliary_Engine::AI_Auxiliary_Engine(const std::string name, const std::string faction_name, const int price) :
	Engine(name, faction_name, price) {

}

int AI_Auxiliary_Engine::GetPowerUsage() const {
	return power_usage_;
}

int AI_Auxiliary_Engine::GetRadiationLevel() const {
	return radiation_level_;
}

int AI_Auxiliary_Engine::GetPrice() const {
	return Engine::price_;
}

std::ostream& operator<< (std::ostream& out, const AI_Auxiliary_Engine& engine) {
	out << "Name: " << "AI Auxiliary Engine" << "\n";
	out << "Faction name: " << engine.GetFactionName() << "\n";
	out << "Power usage: " << engine.GetPowerUsage() << "\n";
	out << "Radiation level: " << engine.GetRadiationLevel() << "\n";
	out << "Price: " << engine.GetPrice() << "\n";
	return out;
}