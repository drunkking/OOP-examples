#pragma once
#include "Shield.h"

class Gunboat_Graviton_Shield : public Shield {
public:
	Gunboat_Graviton_Shield();
	Gunboat_Graviton_Shield(const std::string, const std::string, const int);
	 
	int GetCapacity() const;
	int GetRegenDelay() const;
	int GetRegenerationRate() const;
	int GetRegenPower() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Gunboat_Graviton_Shield&);

private:
	int capacity_ = 125000;
	int regen_delay_ = 14;
	int regeneration_rate_ = 19000;
	int regen_power_ = 10;
};