#define _CRT_SECURE_NO_WARNINGS

#include"life.h"

int main()
{
	srand((unsigned int)time(NULL));

	char arr[ROWS][COLS];
	
	while (1) {
		init(arr, '*');
		//ptintArr(arr);
		//printf("------------------------------------------\n");
		Sleep(150);
		system("cls");
		isSurvival(arr);
		ptintArr(arr);
	}

	//rebirth(arr);

	return 0;
}
