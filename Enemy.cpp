#include "Enemy.h"

void Enemy::IncreaseHealth(int health)
{
	this->health += health;
}

void Enemy::DecreaseHealth(int health)
{
	this->health -= health;
}

int Enemy::getHealth()
{
	return health;
}

void Enemy::Attack()
{
}

void Enemy::Defense()
{
}

void Enemy::SetAtack(int attack)
{
	this->attack = attack;
}

Enemy::Enemy()
{
	health = 100;
	attack = 100;

}

Enemy::~Enemy()
{
}

