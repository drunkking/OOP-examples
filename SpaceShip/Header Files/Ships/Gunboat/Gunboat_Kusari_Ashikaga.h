#pragma once
#include "SpaceShip.h"

class Gunboat_Kusari_Ashikaga : public SpaceShip {
public:
	Gunboat_Kusari_Ashikaga();
	Gunboat_Kusari_Ashikaga(const std::string&, const int&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Gunboat_Kusari_Ashikaga&);
private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	//int price_;
};