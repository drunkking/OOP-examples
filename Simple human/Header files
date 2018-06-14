#pragma once
#include "INVENTORY_MANIPULATION.h"
#include<vector>

class Human : public InventoryManipulation {
public:
	Human() {}
	Human(std::string, std::string, std::string);
	~Human() {}

	void SetIme(const std::string&);
	std::string GetIme() const;

	void SetPrezime(const std::string&);
	std::string GetPrezime() const;

	void SetGodinaRodjenja(const std::string&);
	std::string GetGodinaRodjenja() const;

	virtual void AddElemToInventory(const std::string&);
	virtual void AddMoreElemToInventory(const int&);
	virtual void RemoveElemFromInventory();
	virtual void WhatIsInInventory();
	virtual void IsThisInInventory(const std::string&);

	friend std::ostream& operator<< (std::ostream&, const Human&);
	void Trade(Human& toWho, const std::string& elem);

private:
	std::string ime_;
	std::string prezime_;
	std::string godina_rodjenja_;
	std::vector<std::string> inventory;
};
