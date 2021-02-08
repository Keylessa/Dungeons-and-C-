#include "Misc.h"

//Name of the Game for console
void AsciiArt()
{
	std::cout << R"(

``###"""##.                                                                                 ###""##            .##"""###                     
  ##    `##.                                                                               ###  ##          .##'     `#                     
  ##     `## `###  `###  `########.   .#"#####  .##"##   ###"##.  `########.  ###"###       ####"           ##'       `     #         #     
  ##      ##   ##    ##    ##    ##  :##  ##   ##'   ## ##'   `##   ##    ##  ##   `"      ####N.  ##"'     ##              #         #     
  ##     ###   ##    ##    ##    ##   #####"   ##"""""" ##     ##   ##    ##  `#####.     ##.  ###.#'       ##.         ######### ######### 
  ##    ###'   ##    ##    ##    ##  ##        ##.    # ##.   ###   ##    ##  #.   ##     ###   ####        `##.     #'     #         #     
.########'     `##o#"###..####  ####. #######   `#####'  `#####'  .####  ####.######'     `#####'``###.       `"#####'      #         #     
                                     #'     ##                                                                                              
                                     ######'                                                                                                
       )" << "\n\n";

}

//Check path for the Sounds
bool CheckPath(const std::string& path)
{
	std::ifstream f(path.c_str());
	if (f.good())
		return true;
	else
		return false;
}

//Sound when you start a battle
bool BattleSound(bool play)
{
	if (play == true)
	{
		std::string path = "D:/01 Cursuri C++/CPP Project/DungeonsAndC++/BattleFinal.wav";
		if (CheckPath(path))
		{
			PlaySound(TEXT("D:/01 Cursuri C++/CPP Project/DungeonsAndC++/BattleFinal.wav"), NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else {}
	return play;
}

//Sound for MainMenu
bool MenuSound(bool play)
{
	if (play == true)
	{
		std::string path = "D:/01 Cursuri C++/CPP Project/DungeonsAndC++/Main_Menu.wav";
		if (CheckPath(path))
		{
			PlaySound(TEXT("D:/01 Cursuri C++/CPP Project/DungeonsAndC++/Main_Menu.wav"), NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else {}
	return play;
}

//Sound when you explore the world
bool ExploringSound(bool play)
{
	if (play == true)
	{
		std::string path = "D:/01 Cursuri C++/CPP Project/DungeonsAndC++/Exploring.wav";
		if (CheckPath(path))
		{
			PlaySound(TEXT("D:/01 Cursuri C++/CPP Project/DungeonsAndC++/Exploring.wav"), NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else {}
	return play;
}

//FUnction for the Intro Text
void txtIntro()
{
	std::cout << "*Welcome,stranger.                                                                                                                                                                                       *" << std::endl;
	std::cout << "*Here in Hinderlands, you'll get to fight dragons and conquer the deadliest dungeons.                                                                                                                    *" << std::endl;
	std::cout << "*In a country where magic rules, anything is possible if you wish so.                                                                                                                                    *" << std::endl;
	std::cout << "*It all depends on you, brave hero.                                                                                                                                                                      *" << std::endl;
}

//Wizard Intro description 
void txtIntroWizard()
{
	std::cout << "*Congratulations, grand wizard!                                                                                                                                                                          *" << std::endl;
	std::cout << "*Wizards were the scholars of Hinderlands, spreading knowledge and hope amongst the people.                                                                                                              *" << std::endl;
	std::cout << "*Are you going to help and nurture those in need, or turn to the dark side for the power it held?                                                                                                        *" << std::endl;
	std::cout << "*Choose wisely, young wizard.                                                                                                                                                                            *" << std::endl;
}

//Warrior Intro description
void txtIntroWarrior()
{
	std::cout << "*Congratulations, great warrior!                                                                                                                                                                         *" << std::endl;
	std::cout << "*Warriors were high regarded in Hinderlands, as they were the only protectors of common folk.                                                                                                            *" << std::endl;
	std::cout << "*Are you going to protect the common people, or are you going to instill fear amoungst them?                                                                                                             *" << std::endl;
	std::cout << "*Choose wisely,young warrior.                                                                                                                                                                            *" << std::endl;
}

//Border for Warrior intro
void IntroWarrior()
{
	system("cls");


	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";

	}

	std::cout << "\n";
	txtIntroWarrior();
	for (int row = 0; row < 2; ++row)
	{

		std::cout << "*";
		for (int column = 0; column < 200; ++column)
		{
			std::cout << " ";
		}
		std::cout << "*\n";
	}


	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";
	}

	std::cout << "\n";
	std::cout << "\n";
	system("pause");
}

//Border for Wizard intro
void IntroWizard()
{
	system("cls");
	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";

	}
	std::cout << "\n";
	txtIntroWizard();
	for (int row = 0; row < 2; ++row)
	{

		std::cout << "*";
		for (int column = 0; column < 200; ++column)
		{
			std::cout << " ";
		}
		std::cout << "*\n";
	}


	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";
	}
	std::cout << "\n";
	std::cout << "\n";

	system("pause");
}

//Border for intro text
void intro()
{
	system("cls");
	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";
	}

	std::cout << "\n";
	txtIntro();
	for (int row = 0; row < 2; ++row)
	{

		std::cout << "*";
		for (int column = 0; column < 200; ++column)
		{
			std::cout << " ";
		}
		std::cout << "*\n";
	}


	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";
	}

	std::cout << "\n";
	std::cout << "\n";
	system("pause");
}

//Simple Character Name setup
void NameSetup(Player* player)
{
	std::string name;
	std::cout << "What is your name: \n";
	std::cin.ignore();
	std::getline(std::cin, name);
	player->SetName(name);
}

//Function for choseing your class Warrior / Wizard
Player* characterSetup()
{
	system("cls");

	intro();

	int classOption;
	std::cout << "Press 1 for Warrior \n";
	std::cout << "Press 2 for Wizzard \n";

	std::cin >> classOption;

	Player* player = nullptr;

	switch (classOption)
	{

	case WarriorOption:
	{
		player = new Warrior;
		IntroWarrior();
		NameSetup(player);
		std::cout << "Hello " << player->GetName() << " You are a Warrior\n";
		break;
	}

	case WizzardOption:
	{
		IntroWizard();
		player = new Wizard();
		NameSetup(player);
		std::cout << "Hello " << player->GetName() << " You are a Wizard\n";
		break;
	}
	default:
		break;
	}
	
	return player;
}


void LoadGamePannel()
{
	std::cout << "Save and Loading game Coming Soon\n";
}