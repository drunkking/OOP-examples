#include "H4Z_Brimstone_Helfire_Turret.h"

H4Z_Brimstone_Helfire_Turret::H4Z_Brimstone_Helfire_Turret() {

}

H4Z_Brimstone_Helfire_Turret::H4Z_Brimstone_Helfire_Turret(const std::string name, const std::string faction_name, const int price) :
	Weapon(name, faction_name, price) {

}

int H4Z_Brimstone_Helfire_Turret::GetRotation() const {
	return rotation_;
}

double H4Z_Brimstone_Helfire_Turret::GetLifeTime() const {
	return life_time_;
}

int H4Z_Brimstone_Helfire_Turret::GetTravelRange() const {
	return travel_range_;
}

int H4Z_Brimstone_Helfire_Turret::GetSpeed() const {
	return speed_;
}

int H4Z_Brimstone_Helfire_Turret::GetDamage() const {
	return damage_;
}

int H4Z_Brimstone_Helfire_Turret::GetPrice() const {
	return Weapon::price_;
}


std::ostream& operator<< (std::ostream& out, const H4Z_Brimstone_Helfire_Turret& weapon) {
	out << "Name: " << "H4Z Brimstone Helfire Turret" << "\n";
	out << "Rotation: " << weapon.GetRotation() << "\n";
	out << "Life time: " << weapon.GetLifeTime() << "\n";
	out << "Travel range: " << weapon.GetTravelRange() << "\n";
	out << "Speed: " << weapon.GetSpeed() << "\n";
	out << "Damage: " << weapon.GetDamage() << "\n";
	out << "Price: " << weapon.GetPrice() << "\n";
	return out;
}

