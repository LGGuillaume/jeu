#include <iostream>
#include <cstdlib>
#include <ctime>

void gameplay()
{
	int monsterHP = 100; int attackValue = 0; int attack = 0; 
	int playerHP = 50; int blockValue = 0; int monsterAttack = 0;
	char action; char option;

	std::cout << "------ READY TO FIGHT ? ------" << std::endl;
	std::cout << "------ YES(Y) OR NO(N)  ------" << std::endl;
	std::cin >> option;
	option = toupper(option);
	std::cout << std::endl;



	srand(time(NULL));

	while (option == 'Y')
	{
		std::cout << "ATTACK ?" << " " << "BLOCK ? : ";
		std::cin >> action;
		action = toupper(action);
		std::cout << std::endl;

		if (action == 'A')
		{
		attackValue = rand() % 10;

			if (monsterHP > 0)
			{
				if (attackValue > 0)
				{
					std::cout << "--- SLASH !! ---" << std::endl;
					monsterHP -= attackValue;
					if (monsterHP < 0)
					{
					monsterHP = 0;
					}
					std::cout << "Monster health : " << monsterHP << std::endl;
					std::cout << std::endl;

					if (monsterHP == 0)
					{
					std::cout << "Congrats ! You killed the monster" << std::endl;
					break;
					}
				}
				else
				{
						std::cout << "--- MISSED ! ---" << std::endl;
				}
			}
		}
		if (action == 'B')
		{
			std::cout << "BLOCKED !" << std::endl;
		}
	}
}

int main()
{
	std::cout << "------ MONSTER SLASHER ------";
	std::cout << std::endl;
	std::cout << std::endl;

	gameplay();
}
