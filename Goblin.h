#pragma once
#include "Enemy.h"

class Goblin :
	public Enemy
{

public:
	Goblin();
	~Goblin();
	std::string name;
	std::string getName();
};

