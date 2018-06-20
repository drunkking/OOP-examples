#pragma once
#include "SpaceShip.h"

class Capital_RHGM482_Red_Hessian_Cruiser : public SpaceShip {
public:
	Capital_RHGM482_Red_Hessian_Cruiser();
	Capital_RHGM482_Red_Hessian_Cruiser(const std::string&, const int&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Capital_RHGM482_Red_Hessian_Cruiser&);
private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	//int price_;
};