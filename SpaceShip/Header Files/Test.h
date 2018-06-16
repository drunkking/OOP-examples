#pragma once
#include "CARGO_MANIPULATION.h"
#include "ENGINE_MANIPULATION.h"
#include "SHIELD_MANIPULATION.h"
#include "WEAPON_MANIPULATION.h"
#include <vector>
#include<iostream>

class Test : public CargoManipulation,
	public EngineManipulation,
    public ShieldManipulation,
    public WeaponManipulation{
public:
	Test() {}
	~Test() {}

	void PrintCargo();
	void PringEngine();
	void PrintShield();
	void PrintWeapon();

	//cargo
	virtual void AddCargo(const Cargo&);
	virtual void RemoveCargo();
	virtual void AboutCargo(const Cargo&);

	//engine
	virtual void AddEngine(const Engine&);
	virtual void RemoveEngine();
	virtual void AboutEngine(const Engine&);

	//shield
	virtual void AddShield(const Shield&);
	virtual void RemoveShield();
	virtual void AboutShield(const Shield&);

	//weapon
	virtual void AddWeapon(const Weapon&);
	virtual void RemoveWeapon();
	virtual void AboutWeapon(const Weapon&);



private:
	std::vector<Cargo> kargo;
	std::vector<Engine> motori;
	std::vector<Shield> stit;
	std::vector<Weapon> guns;
};