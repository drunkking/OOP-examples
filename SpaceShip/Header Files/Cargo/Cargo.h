#pragma once
#include<string>


class Cargo {
public:
	Cargo() {}
	Cargo(const std::string, const std::string);
	virtual ~Cargo() {}

	void SetName(const std::string&);
	std::string GetCargoName() const;

	void SetFactionName(const std::string&);
	std::string GetFactionName() const;

	friend std::ostream& operator<< (std::ostream&, const Cargo&);

private:
	std::string name_;
	std::string faction_name_;
};
