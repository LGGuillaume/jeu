#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main()
{
	int monsterHP = 100; int attackValue = 0;
	int playerHP = 50; int blockValue = 0;
	char attack = 'A';
	char block = 'B';
	char action = ' ';
	srand(time(NULL));

	std::cout << "------ READY TO FIGHT ? ------" << std::endl;
	std::cout << std::endl;

	std::cout << "ATTACK ?" << " " << "BLOCK ?" << std::endl;
	std::cin >> action;
	action = toupper(action);
	std::cout << std::endl;

	if (action == 'A')
	{
		int newMonsterHP;
		attackValue = rand() % 30;
		std::cout << "SLASH !!" << std::endl;
		newMonsterHP = monsterHP - attackValue;
		std::cout << "Monster health : " << newMonsterHP << std::endl;
	}
	else if (action == 'B')
	{
		std::cout << "ATTACK BLOCKED !";
	}

}
