#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

void Game(Snaker * snaker)
	{
		
	}


int main()
{
	Snaker snaker = { 0 };
	GameInit(&snaker);
	while (1) {
		GameDraw(&snaker);
		SnakerMove(&snaker);
		Sleep(100);
	}
	return 0;
}