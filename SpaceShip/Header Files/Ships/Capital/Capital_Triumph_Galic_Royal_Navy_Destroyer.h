#pragma once
#include "SpaceShip.h"

class Capital_Triumph_Galic_Royal_Navy_Destroyer : public SpaceShip {
public:
	Capital_Triumph_Galic_Royal_Navy_Destroyer();
	Capital_Triumph_Galic_Royal_Navy_Destroyer(const std::string&, const int&);

	void SetHullStrength(const double&);
	double GetHullStrength() const;

	void SetMaxShiledClass(const int&);
	int GetMaxShieldClass() const;

	int GetCargoSpace() const;
	int GetMaxImpulseSpeed() const;
	int GetPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Capital_Triumph_Galic_Royal_Navy_Destroyer&);
private:
	double hull_strength_;
	int max_shield_class_;
	int cargo_space_;
	int max_impulse_speed_;
	//int price_;
};