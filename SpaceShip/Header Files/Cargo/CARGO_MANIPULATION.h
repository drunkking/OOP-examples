#pragma once
#include "Radon.h"
#include "Xeon.h"
#include "Oxygen.h"

class CargoManipulation {
public:
	virtual ~CargoManipulation() = default;
	virtual void AddCargo(const Cargo&) = 0;
	virtual void RemoveCargo() = 0;
	virtual void AboutCargo(const Cargo&) = 0;
	virtual void AboutCargo(const Radon&) = 0;
	virtual void AboutCargo(const Xeon&) = 0;
	virtual void AboutCargo(const Oxygen&) = 0;
};