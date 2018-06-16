#pragma once
#include "SpaceShip.h"

class Fighter_RHGM17_Loki_Red_Hessian : SpaceShip {
public:
	Fighter_RHGM17_Loki_Red_Hessian();
	Fighter_RHGM17_Loki_Red_Hessian(const std::string&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Fighter_RHGM17_Loki_Red_Hessian&);
private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	int price_;
};