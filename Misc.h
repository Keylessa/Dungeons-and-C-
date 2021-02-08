#pragma once
#include <iostream>
//#include <cstdlib>
#include <string>
#include <windows.h>
#include "Warrior.h"
#include "Wizard.h"
#include "Ork.h"
#include <mmsystem.h>
#include "Crossroads.h"
#include <fstream>

void AsciiArt();
bool CheckPath(const std::string& path);
bool BattleSound(bool play);
bool MenuSound(bool play);
bool ExploringSound(bool play);

//When you chose your character class this function set name 
void NameSetup(Player* player);

//New Game pannel init
Player* characterSetup();

//Load Game pannel init
void LoadGamePannel();


void txtIntro();
void IntroWarrior();
void IntroWizard();
void intro();
void txtIntroWizard();
void txtIntroWarrior();

