#pragma once
#include "Cargo.h"

class Oxygen : public Cargo {
public:
	Oxygen();
	Oxygen(std::string, const std::string, const int);

	int GetAtomicNumber() const;
	double GetRelativeAtomicMass() const;
	std::string GetStateAt20() const;

	friend std::ostream& operator<< (std::ostream&, const Oxygen&);

private:
	int atomic_number_ = 8;
	double relative_atomic_mass_ = 15.999;
	std::string state_at_20_ = "Gas";
};