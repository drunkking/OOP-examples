#include "HUMAN.h"
#include<iostream>

void Human::SetIme(const std::string& ime) {
	ime_ = ime;
}

std::string Human::GetIme() const {
	return ime_;
}

void Human::SetPrezime(const std::string& prezime) {
	prezime_ = prezime;
}

std::string Human::GetPrezime() const {
	return prezime_;
}

void Human::SetGodinaRodjenja(const std::string& god_rodj) {
	godina_rodjenja_ = god_rodj;
}

std::string Human::GetGodinaRodjenja() const {
	return godina_rodjenja_;
}

void Human::AddElemToInventory(const std::string& elem) {
	inventory.push_back(elem);
}


void Human::AddMoreElemToInventory(const int& num) {
	std::string elem;

	std::cout << "Unos elemenata u inventory" << "\n";
	for (int i = 1; i <= num; ++i) {
		std::cout << "Element [" << i << "]: ";
		std::cin >> elem;
		inventory.push_back(elem);
	}
}

void Human::RemoveElemFromInventory() {
	inventory.pop_back();
}

void Human::WhatIsInInventory() {
	if (inventory.empty()) {
		std::cout << "Inventory je prazan!!!" << "\n";
	}
	else {
		std::cout << "\n" << this->GetIme() << " inventory:" << "\n";
		for (auto it = inventory.begin(); it != inventory.end(); ++it) {
			std::cout << *it << "\n";
		}

		std::cout << "\n";
	}
}

void Human::IsThisInInventory(const std::string& elem) {
	if (inventory.empty()) {
		std::cout << "Inventory je prazan!!!" << "\n";
	}
	else {
		auto it = find(inventory.cbegin(), inventory.cend(), elem);

		if (it != inventory.cend()) {
			std::cout << "Element " << *it << " pronadjen!" << "\n";
		}
		else {
			std::cout << "Element nije pronadjen!" << "\n";
		}
	}
}


void Human::Trade(Human& toWho, const std::string& elem) {
	if (inventory.empty()) {
		std::cout << "Inventory je prazan, nema elemenata za slanje!!!" << "\n";
	}
	else
	{
		auto it = find(inventory.cbegin(), inventory.cend(), elem);

		if (it != inventory.cend()) {
			toWho.AddElemToInventory(elem);
			inventory.erase(it);
			std::cout << "Uspesno obavljano slanje" << "\n";
		}
		else {
			std::cout << "\n" << "Ne mozes da saljes element koji nemas!!!" << "\n";
		}
	}
}

Human::Human(std::string ime, std::string prezime, std::string godina_rodjenja) :
	ime_(ime), prezime_(prezime), godina_rodjenja_(godina_rodjenja)
{

}

std::ostream& operator<< (std::ostream& out, const Human& human) {
	out << "Ime: " << human.GetIme() << "\n";
	out << "Prezime: " << human.GetPrezime() << "\n";
	out << "Godina rodjenja: " << human.GetGodinaRodjenja() << "\n";
	return out;
}