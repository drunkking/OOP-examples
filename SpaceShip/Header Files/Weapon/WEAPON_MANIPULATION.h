#pragma once
#include "EMP_7_Pulse_Cannon.h"
#include "H4Z_Brimstone_Helfire_Turret.h"
#include "Musket_Gallic_Tachyon_Cannon.h"

class WeaponManipulation {
public:
	virtual ~WeaponManipulation() = default;
	virtual void AddWeapon(const Weapon&) = 0;
	virtual void RemoveWeapon() = 0;
	virtual void AboutWeapon(const Weapon&) = 0;
	virtual void AboutWeapon(const EMP_7_Pulse_Cannon&) = 0;
	virtual void AboutWeapon(const H4Z_Brimstone_Helfire_Turret&) = 0;
	virtual void AboutWeapon(const Musket_Gallic_Tachyon_Cannon&) = 0;
};