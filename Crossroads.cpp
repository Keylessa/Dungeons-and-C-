#include "Crossroads.h"

//Chose path to follow
int chooseRoad()
{
	system("cls");
	crossroads();

	std::cout << "Press 1 for Forest" << std::endl;
	std::cout << "Press 2 for Village" << std::endl;
	std::cout << "Press 3 for Cave" << std::endl;
	int option = 1;
	std::cin >> option;

	return option;
}

//Crossroads Border with *
void crossroads()
{
	
	for (int column = 0; column < 200; ++column)
	{
		std::cout << "*";
	}

	std::cout << "\n";
	text();
	for (int row = 0; row < 5; ++row)
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

}
//Simple description 
void text()
{
	std::cout << "*In front of your eyes, lies the Hinderlands.                                                                                                                                                            *" << std::endl;
	std::cout << "*You find yourself at a crossroad, ahead lies a dense forest,                                                                                                                                            *" << std::endl;
	std::cout << "*at your left a cave is visible and at your right side a village arises.                                                                                                                                 *" << std::endl;
	std::cout << "*  Where will you go, brave adventurer?                                                                                                                                                                  *" << std::endl;
}
