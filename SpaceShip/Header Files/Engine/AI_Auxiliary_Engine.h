#pragma once
#include "Engine.h"

class AI_Auxiliary_Engine : public Engine {
public:
	AI_Auxiliary_Engine();
	AI_Auxiliary_Engine(const std::string, const std::string, const int);

	int GetPowerUsage() const;
	int GetRadiationLevel() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const AI_Auxiliary_Engine&);

private:
	int power_usage_ = 210;
	int radiation_level_ = 4;
};