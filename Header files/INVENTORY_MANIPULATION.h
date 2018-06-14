#pragma once
#include<string>

class InventoryManipulation {
public:
	virtual ~InventoryManipulation() = default;
	virtual void AddElemToInventory(const std::string&) = 0;
	virtual void AddMoreElemToInventory(const int&) = 0;
	virtual void RemoveElemFromInventory() = 0;
	virtual void WhatIsInInventory() = 0;
	virtual void IsThisInInventory(const std::string&) = 0;
};