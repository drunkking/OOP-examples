#pragma once
#include "Weapon.h"

class H4Z_Brimstone_Helfire_Turret : public Weapon {
public:
	H4Z_Brimstone_Helfire_Turret();
	H4Z_Brimstone_Helfire_Turret(const std::string, const std::string, const int);

	int GetRotation() const;
	double GetLifeTime() const;
	int  GetTravelRange() const;
	int GetSpeed() const;
	int GetDamage() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const H4Z_Brimstone_Helfire_Turret&);

private:
	int rotation_ = 95;
	double life_time_ = 0.57;
	int travel_range_ = 990;
	int speed_ = 990;
	int damage_ = 410;
};