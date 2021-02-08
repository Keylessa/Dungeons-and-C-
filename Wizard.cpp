#include "Wizard.h"

void Wizard::setWizardType()
{
	SetPlayerType(WizzardOption);
}

Wizard::Wizard()
{
	SetMana(50);
	setWizardType();
}

Wizard::~Wizard()
{
}
