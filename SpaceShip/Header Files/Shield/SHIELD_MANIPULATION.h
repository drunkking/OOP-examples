#pragma once
#include "Gunboat_Graviton_Shield.h"
#include "CG6S_Pavise_Transport_Shield.h"
#include "SGD2_Advance_Protector_Fighter_Shield.h"

class ShieldManipulation {
public:
	virtual ~ShieldManipulation() = default;
	virtual void AddShield(const Shield&) = 0;
	virtual void RemoveShield() = 0;
	virtual void AboutShield(const Shield&) = 0;
	virtual void AboutShield(const Gunboat_Graviton_Shield&) = 0;
	virtual void AboutShield(const CG6S_Pavise_Transport_Shield&) = 0;
	virtual void AboutShield(const SGD2_Advance_Protector_Fighter_Shield&) = 0;
};