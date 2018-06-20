#pragma once
#include "Engine.h"

class Cheetah_ZZ8J_Engine : public Engine {
public:
	Cheetah_ZZ8J_Engine();
	Cheetah_ZZ8J_Engine(const std::string, const std::string, const int);

	int GetPowerUsage() const;
	int GetRadiationLevel() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Cheetah_ZZ8J_Engine&);

private:
	int power_usage_ = 357;
	int radiation_level_ = 5;

};