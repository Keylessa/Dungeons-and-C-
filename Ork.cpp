#include "Ork.h"

Ork::Ork()
{
	IncreaseHealth(50);
}

Ork::~Ork()
{
}

std::string Ork::getName()
{
	return name;
}
