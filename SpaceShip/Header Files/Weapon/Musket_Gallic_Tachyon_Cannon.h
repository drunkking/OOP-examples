#pragma once
#include "Weapon.h"

class Musket_Gallic_Tachyon_Cannon: public Weapon {
public:
	Musket_Gallic_Tachyon_Cannon();
	Musket_Gallic_Tachyon_Cannon(const std::string, const std::string, const int);

	int GetRotation() const;
	double GetLifeTime() const;
	int  GetTravelRange() const;
	int GetSpeed() const;
	int GetDamage() const;

	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Musket_Gallic_Tachyon_Cannon&);

private:
	int rotation_ = 90;
	double life_time_ = 2.50;
	int travel_range_ = 1500;
	int speed_ = 900;
	int damage_ = 512;
};