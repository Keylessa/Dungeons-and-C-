// DungeonsAndC++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Misc.h"

//Simple Chest - When the chest is open all items enter in the player inventory 
void Chest(Player& MyPlayer)
{
	if (MyPlayer.GetPlayerType() == WarriorOption)
	{
		Item* Item1 = new Item("sword");
		Item* Item2 = new Item("armor");
		Item* Item3 = new Item("shield");
		MyPlayer.Inventory.push_back(*Item1);
		MyPlayer.Inventory.push_back(*Item2);
		MyPlayer.Inventory.push_back(*Item3);
	}
	else 
	{
		Item* Item4 = new Item("staff");
		Item* Item5 = new Item("robe");
		Item* Item6 = new Item("heat");
		MyPlayer.Inventory.push_back(*Item4);
		MyPlayer.Inventory.push_back(*Item5);
		MyPlayer.Inventory.push_back(*Item6);
	}

}

//We prepare player 
void PreparePlayer(Player& MyPlayer)
{
	system("cls");
	std::string answer;
	std::cout << "In front of you there is a chest\n";
	std::cout << "Do you wish to open it\n";
	std::cout << "Your answer yes/no\n";
	std::cin >> answer;

	if (answer == "yes")
	{
		Chest(MyPlayer);

		std::cout << "Your item added to the inventory\n";
	}
	else
	{
		std::cout << "Good Luck\n";
	}
}

//Simple function for BattleSystem
void battle(Player& myPlayer, Enemy& myEnemy)
{
	ExploringSound(false);
	BattleSound(true);

	std::cout << "You are in the Battle\n";
	std::cout << "The enemy attack you\n";
	
	while (myPlayer.GetHealth() > 0 || myEnemy.getHealth() > 0)
	{
		myEnemy.Attack();
		myPlayer.DecreaseHealth(10);
		myPlayer.Attack();
		myEnemy.DecreaseHealth(20);

		if (myPlayer.GetHealth() <= 0)
		{
			std::cout << "The Enemy has killed you\n";
			break;
		}
		else if (myEnemy.getHealth() <= 0)
		{
			std::cout << "You have killed the enemy\n";
			break;
		}
		else
		{
			continue;
		}
	}
	system("pause");
}

//When you chose to enter in the forest
void InTheForest(Player& myPlayer)
{
	std::cout << "You are in the forest an see a path ahead\n";
	std::cout << "And hiding in the bushes there is a ork\n";
	std::cout << "He attacks you\n";

	Enemy* enemy = new Ork();
	battle(myPlayer, *enemy);
}


int main()
{
	 
	system("cls");

	int MenuOptionID = 0;

	//MainMenu 
	MenuSound(true); //for play type true and for stop type false
	AsciiArt();

	std::cout << "Press 1 for New Game \n";
	std::cout << "Press 2 for Load Game \n";
	std::cin >> MenuOptionID;
	Player* player = nullptr;


	if (MenuOptionID == 1)
	{
		player = characterSetup();
		MenuSound(false);
		ExploringSound(true);
		int nextPathOption = chooseRoad();
		
		if (nextPathOption == 1)
		{
			PreparePlayer(*player);
			InTheForest(*player);
		}
		else if (nextPathOption == 2)
		{
			std::cout << "Village is underdevelopment";
		}
		else if (nextPathOption == 3)
		{
			std::cout << "Cave is underdevelopment";
		}
		else
		{
			std::cout << "You chose a vrong path. Try again";
		}
	}
	else if (MenuOptionID == 2)
	{
		LoadGamePannel();
	}
	else
	{
		std::cout << "You dont chose any option listed on the front \n";
	}

}
