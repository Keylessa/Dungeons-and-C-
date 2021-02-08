#include "Player.h"

Player::Player()
{
	health = 100;
	mana = 100;
	nume = "Necunoscut";
}

Player::~Player()
{
}

void Player::Attack()
{
}

void Player::Defense()
{
}

void Player::IncreaseHealth(int health)
{
	this->health += health;
}

void Player::DecreaseHealth(int health)
{
	this->health -= health;
}

void Player::SetMana(int mana)
{
	this->mana += mana;
}

void Player::SetName(std::string nume)
{
	this->nume = nume;
}

int Player::GetHealth()
{
	return health;
}

int Player::GetMana()
{
	return mana;
}

void Player::SetPlayerType(characterOption option)
{
	if (option == WarriorOption)
	{
		eCharacterOption = WarriorOption;
	}
	else 
	{
		eCharacterOption = WizzardOption;
	}
}

std::string Player::GetName()
{
	return nume;
}

characterOption Player::GetPlayerType()
{
	return eCharacterOption;
}
