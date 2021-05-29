#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"


void Game(Snaker* snaker, Food* food)
{
	GameDraw(snaker,food);
	SnakerMove(snaker);
	Keyboard(snaker);	
	EatFood(snaker, food);
	SnakerDie(snaker, food);
}

int main()
{
	srand((unsigned int) time(NULL));
	Snaker snaker = { 0 };
	Food food = { 0 };
	initgraph(LENGTH+200, WIDTH/*,SHOWCONSOLE*/);//Í¼Ïñ´óÐ¡
	//int Input;
	while (menu()) {
	Init(&snaker, &food);
		do
		{
			Game(&snaker, &food);
			Sleep(snaker.s);
		}while (snaker.flag);
		Sleep(1000);
		cleardevice();
	}
	return 0;
}