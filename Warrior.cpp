#include "Warrior.h"

void Warrior::setWarrioeType()
{
	SetPlayerType(WarriorOption);
}

Warrior::Warrior()
{
	IncreaseHealth(50);
	setWarrioeType();
}

Warrior::~Warrior()
{
}
