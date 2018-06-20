#pragma once
#include<string>

class Engine {
public:
	Engine() {}
	Engine(const std::string, const std::string, const int);
	virtual ~Engine() {}

	void SetEngineName(const std::string&);
	std::string GetEngineName() const;

	void SetFactionName(const std::string&);
	std::string GetFactionName() const;

	int GetEnginePrice() const;

	friend std::ostream& operator<< (std::ostream&, const Engine&);

protected:
	int price_;

private:
	std::string name_;
	std::string faction_name_;
};
