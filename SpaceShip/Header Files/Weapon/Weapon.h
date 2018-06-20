#pragma once
#include<string>

class Weapon {
public:
	Weapon();
	Weapon(const std::string, const std::string, const int);
	virtual ~Weapon() {}

	void SetName(const std::string&);
	std::string GetName() const;

	void SetFactionName(const std::string&);
	std::string GetFactionName() const;

	int GetWeaponPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Weapon&);

protected:
	int price_;

private:
	std::string name_;
	std::string faction_name_;
};