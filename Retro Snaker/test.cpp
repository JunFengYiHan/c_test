#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

void Game(Snaker* snaker)
{
	GameDraw(snaker);
	SnakerMove(snaker);
	keyboard(snaker);	
}

int main()
{
	Snaker snaker = { 0 };
	GameInit(&snaker);
	int n = 1;
	do
	{
		//n = _getch();
		Game(&snaker);
		Sleep(50);
	}while (n);
	return 0;
}