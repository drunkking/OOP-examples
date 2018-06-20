#pragma once
#include "Cargo.h"

class Radon : public  Cargo {
public:
	Radon();
	Radon(std::string, const std::string, const int);

	int GetAtomicNumber() const;
	double GetRelativeAtomicMass() const;
	std::string GetStateAt20() const;

	friend std::ostream& operator<< (std::ostream&, const Radon&);

private:
	int atomic_number_ = 86;
	double relative_atomic_mass_ = 222;
	std::string state_at_20_ = "Gas";
};