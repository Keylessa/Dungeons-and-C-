#pragma once
#include "Enemy.h"
class Ork :
	public Enemy
{

public:
	Ork();
	~Ork();
	std::string name;
	std::string getName();
};

