#pragma once
#include "HUMAN.h"
#include<iostream>
#include<deque>

void AddHuman(std::deque<Human>& ljudi) {
	std::string ime;
	std::string prezime;
	std::string godina_rodjenja;

	std::cout << "------ Unos ------ \n";
	std::cout << "Ime: "; std::cin >> ime;
	std::cout << "Prezime: "; std::cin >> prezime;
	std::cout << "Godinu rodjenja: "; std::cin >> godina_rodjenja;

	ljudi.push_back(Human(ime, prezime, godina_rodjenja));
}

void AddMoreHumans(std::deque<Human>& ljudi, const int& num) {
	std::string ime;
	std::string prezime;
	std::string godina_rodjenja;

	for (int i = 1; i <= num; i++) {
		std::cout << "------ Unos ------ \n";
		std::cout << "Ime: "; std::cin >> ime;
		std::cout << "Prezime: "; std::cin >> prezime;
		std::cout << "Godinu rodjenja: "; std::cin >> godina_rodjenja;

		ljudi.push_back(Human(ime, prezime, godina_rodjenja));
	}
}

void PrintHumans(std::deque<Human>& ljudi) {
	if (ljudi.empty()) {
		std::cout << "Nema ljudi, deque je prazan!!!" << "\n";
	}
	else {
		std::cout << "\n" << "_|_|>> ISPIS <<|_|_" << "\n";
		for (auto it = ljudi.begin(); it != ljudi.cend(); ++it) {
			std::cout << "======================" << "\n";
			std::cout << *it << "\n";
		}
	}
}

void PrintHumansInventory(std::deque<Human>& ljudi) {
	if (ljudi.empty()) {
		std::cout << "Nema ljudi, deque je prazan!!!" << "\n";
	}
	else {
		for (int it = 0; it < ljudi.size(); ++it) {
			ljudi.at(it).WhatIsInInventory();
		}
	}
}

void PrintHumanInventory(std::deque<Human>& ljudi, const std::string& ime) {
	if (ljudi.empty()) {
		std::cout << "Nema ljudi, deque je prazan!!!" << "\n";
	}
	else {
		for (auto it = ljudi.begin(); it != ljudi.end(); ++it) {
			if (it->GetIme() == ime) {
				it->WhatIsInInventory();
			}
		}
	}
}