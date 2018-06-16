#pragma once
#include "SpaceShip.h"

class Gunboat_T883GB_Ahoudari : public SpaceShip {
public:
	Gunboat_T883GB_Ahoudari();
	Gunboat_T883GB_Ahoudari(const std::string&);
	
	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Gunboat_T883GB_Ahoudari&);

private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	int price_;
};