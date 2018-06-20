#pragma once
#include "SpaceShip.h"

class Gunboat_CTE12400_Condor : public SpaceShip {
public:
	Gunboat_CTE12400_Condor();
	Gunboat_CTE12400_Condor(const std::string&, const int&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Gunboat_CTE12400_Condor&);

private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	//int price_;
};