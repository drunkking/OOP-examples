#pragma once
#include "CARGO_MANIPULATION.h"
#include "ENGINE_MANIPULATION.h"
#include "SHIELD_MANIPULATION.h"
#include "WEAPON_MANIPULATION.h"
#include <vector>
#include<map>
#include<iostream>

class SpaceShip :
	public CargoManipulation,
	public EngineManipulation,
	public ShieldManipulation,
	public WeaponManipulation {

public:
	SpaceShip();
	SpaceShip(const std::string);
	virtual ~SpaceShip(){}


	void ListCargo();
	void ListEngine();
	void ListShield();
	void ListWeapon();

	std::string GetFaction() const;
	void SetFaction(const std::string&);

	
	//Cargo
	virtual void AddCargo(const Cargo&);
	virtual void RemoveCargo();
	virtual void AboutCargo(const Cargo&);

	//Engine
	virtual void AddEngine(const Engine&);
	virtual void RemoveEngine();
	virtual void AboutEngine(const Engine&);

	//Shield
	virtual void AddShield(const Shield&);
	virtual void RemoveShield();
	virtual void AboutShield(const Shield&);

	//Weapon
	virtual void AddWeapon(const Weapon&);
	virtual void RemoveWeapon();
	virtual void AboutWeapon(const Weapon&);
private:
	std::vector<Cargo> cargo_v;
	std::map<int, Engine> engine_m;
	std::map<int, Weapon> guns_m;
	std::vector<Shield> shield_v;
	std::string faction_;

	int engine_count = 0;
	int guns_count = 0;
};