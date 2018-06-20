#pragma once
#include<string>

class Cargo {
public:
	Cargo();
	Cargo(std::string, const std::string, const int);
	virtual ~Cargo() {}

	void SetName(const std::string&);
	std::string GetCargoName() const;

	void SetFactionName(const std::string&);
	std::string GetFactionName() const;

	int GetCargoPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Cargo&);

protected:
	int price_;

private:
	std::string name_;
	std::string faction_name_;
};
