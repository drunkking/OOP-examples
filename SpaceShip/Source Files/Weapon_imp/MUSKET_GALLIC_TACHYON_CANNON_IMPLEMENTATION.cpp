#include "Musket_Gallic_Tachyon_Cannon.h"

Musket_Gallic_Tachyon_Cannon::Musket_Gallic_Tachyon_Cannon() {

}

Musket_Gallic_Tachyon_Cannon::Musket_Gallic_Tachyon_Cannon(const std::string name, const std::string faction_name, const int price) :
	Weapon(name, faction_name, price) {

}

int Musket_Gallic_Tachyon_Cannon::GetRotation() const {
	return rotation_;
}

double Musket_Gallic_Tachyon_Cannon::GetLifeTime() const {
	return life_time_;
}

int Musket_Gallic_Tachyon_Cannon::GetTravelRange() const {
	return travel_range_;
}

int Musket_Gallic_Tachyon_Cannon::GetSpeed() const {
	return speed_;
}

int Musket_Gallic_Tachyon_Cannon::GetDamage() const {
	return damage_;
}

int Musket_Gallic_Tachyon_Cannon::GetPrice() const {
	return Weapon::price_;
}

std::ostream& operator<< (std::ostream& out, const Musket_Gallic_Tachyon_Cannon& weapon) {
	out << "Name: " << "Musket Gallic Tachyon Cannon" << "\n";
	out << "Rotation: " << weapon.GetRotation() << "\n";
	out << "Life time: " << weapon.GetLifeTime() << "\n";
	out << "Travel range: " << weapon.GetTravelRange() << "\n";
	out << "Speed: " << weapon.GetSpeed() << "\n";
	out << "Damage: " << weapon.GetDamage() << "\n";
	out << "Price: " << weapon.GetPrice() << "\n";
	return out;
}