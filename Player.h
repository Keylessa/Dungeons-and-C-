#pragma once
#include <string>
#include <vector>
#include "Item.h"

enum characterOption
{
	WarriorOption = 1,
	WizzardOption
};

//Clasa de baza a playerului
class Player
{
private:
	int health;
	int mana;
	std::string nume;
	characterOption eCharacterOption;
	
public:
	//Constructor
	Player();
	//Destructor
	virtual ~Player();
	void Attack();
	void Defense();
	void SetName(std::string nume);
	std::string GetName();
	characterOption GetPlayerType();
	void DecreaseHealth(int health);
	int GetHealth();
	int GetMana();
	std::vector<Item> Inventory;

protected:
	void IncreaseHealth(int health);
	
	void SetMana(int mana);
	
	
	void SetPlayerType(characterOption option);
	
};

