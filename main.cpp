#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
	int monsterHP = 100; int attackValue = 0;
	int playerHP = 50; int blockValue = 0;
	int attack = 0;
	char action;
	char option;

	std::cout << "------ READY TO FIGHT ? ------" << std::endl;
	std::cout << "------ YES(Y) OR NO(N)  ------" << std::endl;
	std::cin >> option;
	option = toupper(option);
	std::cout << std::endl;



	srand(time(NULL));

	while (option == 'Y')
	{
		std::cout << "ATTACK ?" << " " << "BLOCK ?" << std::endl;
		std::cin >> action;
		action = toupper(action);
		std::cout << std::endl;

		if (action == 'A')
		{
			attackValue = rand() % 20;

			if (attackValue > 0)
			{
				int newMonsterHP;
				std::cout << "SLASH !!" << std::endl;
				newMonsterHP = monsterHP - attackValue;
				int* tmpHP = new int[newMonsterHP];
				std::cout << "Monster health : " << tmpHP << std::endl;
				std::cout << std::endl;
				continue;
			}
			else
				std::cout << "MISSED !";
				std::cout << std::endl;
		}
		if (action == 'B')
		{
			std::cout << "BLOCKED !" << std::endl;
		}
	}

	

}
