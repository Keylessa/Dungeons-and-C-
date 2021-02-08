#pragma once
#include "Player.h"

class Wizard : public Player
{
private:
	void setWizardType();
public:
	Wizard();
	~Wizard();
};

