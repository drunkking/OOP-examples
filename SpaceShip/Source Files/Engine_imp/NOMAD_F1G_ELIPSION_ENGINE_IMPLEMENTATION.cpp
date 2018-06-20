#include "Nomad_F1G_Elipsion_Engine.h"

Nomad_F1G_Elipsion_Engine::Nomad_F1G_Elipsion_Engine() {

}

Nomad_F1G_Elipsion_Engine::Nomad_F1G_Elipsion_Engine(const std::string name, const std::string faction_name, const int price) :
	Engine(name, faction_name, price) {

}

int Nomad_F1G_Elipsion_Engine::GetPowerUsage() const {
	return power_usage_;
}

int Nomad_F1G_Elipsion_Engine::GetRadiationLevel() const {
	return radiation_level_;
}

int Nomad_F1G_Elipsion_Engine::GetPrice() const {
	return Engine::price_;
}

std::ostream& operator<< (std::ostream& out, const Nomad_F1G_Elipsion_Engine& engine) {
	out << "Name: " << "Nomad F1G Elipsion Engine" << "\n";
	out << "Faction name: " << engine.GetFactionName() << "\n";
	out << "Power usage: " << engine.GetPowerUsage() << "\n";
	out << "Radiation level: " << engine.GetRadiationLevel() << "\n";
	out << "Price: " << engine.GetPrice() << "\n";
	return out;
}
