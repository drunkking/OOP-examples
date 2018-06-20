#pragma once
#include "SpaceShip.h"

class Fighter_MJ1_Gecko_Council : public SpaceShip {
public:
	Fighter_MJ1_Gecko_Council();
	Fighter_MJ1_Gecko_Council(const std::string&, const int&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Fighter_MJ1_Gecko_Council&);
private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	//int price_;
};