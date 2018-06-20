#pragma once
#include<string>

class Shield {
public:
	Shield() {}
	Shield(const std::string, const std::string, const int);
	virtual ~Shield() {}

	void SetName(const std::string&);
	std::string GetName() const;

	void SetFactionName(const std::string&);
	std::string GetFactionName() const;

	int GetShieldPrice() const;

	friend std::ostream& operator<< (std::ostream&, const Shield&);

protected:
	int price_;

private:
	std::string name_;
	std::string faction_name_;
};