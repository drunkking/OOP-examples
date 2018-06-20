#pragma once
#include "Shield.h"

class SGD2_Advance_Protector_Fighter_Shield : public Shield {
public:
	SGD2_Advance_Protector_Fighter_Shield();
	SGD2_Advance_Protector_Fighter_Shield(const std::string, const std::string, const int);

	int GetCapacity() const;
	int GetRegenDelay() const;
	int GetRegenerationRate() const;
	int GetRegenPower() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const SGD2_Advance_Protector_Fighter_Shield&);

private:
	int capacity_ = 5404;
	int regen_delay_ = 12;
	int regeneration_rate_ = 120;
	int regen_power_ = 10;
};