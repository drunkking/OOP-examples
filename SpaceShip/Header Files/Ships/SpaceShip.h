#pragma once
#include "CARGO_MANIPULATION.h"
#include "ENGINE_MANIPULATION.h"
#include "SHIELD_MANIPULATION.h"
#include "WEAPON_MANIPULATION.h"
#include<vector>
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
	SpaceShip(const std::string, const int);
	virtual ~SpaceShip(){}

	void ListCargo();
	void ListEngine();
	void ListShield();
	void ListWeapon();

	int GetShipPrice() const;
	void SetShipPrice(const int&);

	std::string GetFaction() const;
	void SetFaction(const std::string&);

	//Cargo
	virtual void AddCargo(const Cargo&);
	virtual void RemoveCargo();
	virtual void AboutCargo(const Cargo&);
	virtual void AboutCargo(const Radon&);
	virtual void AboutCargo(const Xeon&);
	virtual void AboutCargo(const Oxygen&);

	//Engine
	virtual void AddEngine(const Engine&);
	virtual void RemoveEngine();
	virtual void AboutEngine(const Engine&);
	virtual void AboutEngine(const Nomad_F1G_Elipsion_Engine&);
	virtual void AboutEngine(const AI_Auxiliary_Engine&);
	virtual void AboutEngine(const Cheetah_ZZ8J_Engine&);

	//Shield
	virtual void AddShield(const Shield&);
	virtual void RemoveShield();
	virtual void AboutShield(const Shield&);
	virtual void AboutShield(const Gunboat_Graviton_Shield&);
	virtual void AboutShield(const CG6S_Pavise_Transport_Shield&);
	virtual void AboutShield(const SGD2_Advance_Protector_Fighter_Shield&);

	//Weapon
	virtual void AddWeapon(const Weapon&);
	virtual void RemoveWeapon();
	virtual void AboutWeapon(const Weapon&);
	virtual void AboutWeapon(const EMP_7_Pulse_Cannon&);
	virtual void AboutWeapon(const H4Z_Brimstone_Helfire_Turret&);
	virtual void AboutWeapon(const Musket_Gallic_Tachyon_Cannon&);

protected:
	int price_;

private:
	std::vector<Cargo> cargo_v;
	std::map<int, Engine> engine_m;
	std::map<int, Weapon> guns_m;
	std::vector<Shield> shield_v;
	std::string faction_;
	
	int engine_count = 0;
	int guns_count = 0;
};