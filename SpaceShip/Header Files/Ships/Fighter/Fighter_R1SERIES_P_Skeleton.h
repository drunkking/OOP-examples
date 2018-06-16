#pragma once
#include "SpaceShip.h"

class Fighter_R1SERIES_P_Skeleton : SpaceShip {
public:
	Fighter_R1SERIES_P_Skeleton();
	Fighter_R1SERIES_P_Skeleton(const std::string&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Fighter_R1SERIES_P_Skeleton&);
private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	int price_;
};