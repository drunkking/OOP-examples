#pragma once
#include<string>

class Shield {
public:
	Shield() {}
	Shield(const std::string, const std::string);
	virtual ~Shield() {}

	void SetName(const std::string&);
	std::string GetName() const;

	void SetFactionName(const std::string&);
	std::string GetFactionName() const;

	friend std::ostream& operator<< (std::ostream&, const Shield&);

private:
	std::string name_;
	std::string faction_name_;
};
