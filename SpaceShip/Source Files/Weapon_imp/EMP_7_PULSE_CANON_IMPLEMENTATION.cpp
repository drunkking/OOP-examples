#include "EMP_7_Pulse_Cannon.h"

EMP_7_Pulse_Cannon::EMP_7_Pulse_Cannon() {

}

EMP_7_Pulse_Cannon::EMP_7_Pulse_Cannon(const std::string name, const std::string faction_name, const int price) :
	Weapon(name, faction_name, price) {

}


int EMP_7_Pulse_Cannon::GetRotation() const {
	return rotation_;
}

double EMP_7_Pulse_Cannon::GetLifeTime() const {
	return life_time_;
}

int EMP_7_Pulse_Cannon::GetTravelRange() const {
	return travel_range_;
}

int EMP_7_Pulse_Cannon::GetSpeed() const {
	return speed_;
}

int EMP_7_Pulse_Cannon::GetDamage() const {
	return damage_;
}

int EMP_7_Pulse_Cannon::GetPrice() const {
	return Weapon::price_;
}



std::ostream& operator<< (std::ostream& out, const EMP_7_Pulse_Cannon& weapon) {
	out << "Name: " << "EMP 7 Pulse Cannon" << "\n";
	out << "Rotation: " << weapon.GetRotation() << "\n";
	out << "Life time: " << weapon.GetLifeTime() << "\n";
	out << "Travel range: " << weapon.GetTravelRange() << "\n";
	out << "Speed: " << weapon.GetSpeed() << "\n";
	out << "Damage: " << weapon.GetDamage() << "\n";
	out << "Price: " << weapon.GetPrice() << "\n";
	return out;
}