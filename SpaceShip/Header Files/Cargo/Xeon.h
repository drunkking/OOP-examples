#pragma once
#include "Cargo.h"

class Xeon : public Cargo {
public:
	Xeon();
	Xeon(std::string, const std::string, const int);

	int GetAtomicNumber() const;
	double GetRelativeAtomicMass() const;
	std::string GetStateAt20() const;

	friend std::ostream& operator<< (std::ostream&, const Xeon&);

private:
	int atomic_number_ = 54;
	double relative_atomic_mass_ = 131.293;
	std::string state_at_20_ = "Gas";
};