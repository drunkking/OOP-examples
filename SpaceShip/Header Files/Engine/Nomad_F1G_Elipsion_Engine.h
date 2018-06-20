#pragma once
#include "Engine.h"

class Nomad_F1G_Elipsion_Engine : public Engine {
public:
	Nomad_F1G_Elipsion_Engine();
	Nomad_F1G_Elipsion_Engine(const std::string, const std::string, const int);

	int GetPowerUsage() const;
	int GetRadiationLevel() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Nomad_F1G_Elipsion_Engine&);

private:
	int power_usage_ = 115;
	int radiation_level_ = 2;
};