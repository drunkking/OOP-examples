#pragma once
#include "Shield.h"

class CG6S_Pavise_Transport_Shield : public Shield {
public:
	CG6S_Pavise_Transport_Shield();
	CG6S_Pavise_Transport_Shield(const std::string, const std::string, const int);

	int GetCapacity() const;
	int GetRegenDelay() const;
	int GetRegenerationRate() const;
	int GetRegenPower() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const CG6S_Pavise_Transport_Shield&);

private:
	int capacity_ = 5000;
	int regen_delay_ = 9;
	int regeneration_rate_ = 1250;
	int regen_power_ = 0;
};