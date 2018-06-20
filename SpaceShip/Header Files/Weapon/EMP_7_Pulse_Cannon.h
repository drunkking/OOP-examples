#pragma once
#include "Weapon.h"

class EMP_7_Pulse_Cannon : public Weapon {
public:
	EMP_7_Pulse_Cannon();
	EMP_7_Pulse_Cannon(const std::string, const std::string, const int);

	int GetRotation() const;
	double GetLifeTime() const;
	int  GetTravelRange() const;
	int GetSpeed() const;
	int GetDamage() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const EMP_7_Pulse_Cannon&);

private:
	int rotation_ = 90;
	double life_time_ = 2.50;
	int travel_range_ = 1500;
	int speed_ = 900;
	int damage_ = 451;
};