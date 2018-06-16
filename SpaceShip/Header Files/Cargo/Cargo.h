#pragma once
#include<string>


class Cargo {
public:
	Cargo() {}
	Cargo(std::string name, const std::string faction_name);
	virtual ~Cargo() {}

	void SetName(const std::string& name);
	std::string GetCargoName() const;

	void SetFactionName(const std::string& faction_name);
	std::string GetFactionName() const;

	friend std::ostream& operator<< (std::ostream&, const Cargo&);

private:
	std::string name_;
	std::string faction_name_;
};
