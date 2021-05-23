#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"


void Game(Snaker* snaker, Food* food)
{
	
	GameDraw(snaker,food);
	SnakerMove(snaker);
	Keyboard(snaker);	
	EatFood(snaker, food);
}

int main()
{
Flag:
	srand((unsigned int) time(NULL));
	Snaker snaker = { 0 };
	Food food = { 0 };
	Init(&snaker, &food);
	int Input;
	do
	{
		//switch()
		Game(&snaker, &food);
		Sleep(snaker.s);
	}while (1);
	return 0;
}