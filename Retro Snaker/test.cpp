#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"


void Game(Snaker* snaker, Food* food)
{
	GameDraw(snaker,food);
	EatFood(snaker, food);//��ʳ��һ��Ҫ���ƶ�֮ǰ����Ȼ�ͻ���һ������
	Keyboard(snaker);	
	SnakerMove(snaker);
	SnakerDie(snaker, food);
}

int main()
{
	srand((unsigned int) time(NULL));
	Snaker snaker = { 0 };
	Food food = { 0 };
	initgraph(LENGTH+200, WIDTH/*,SHOWCONSOLE*/);//ͼ���С
	cleardevice();//����
	/*IMAGE img;
	loadimage(&img, "����.jpg", 0, 0);
	putimage(0, 0, &img);*/
	//_getch();
	//int Input;
	while (menu()) {
	Init(&snaker, &food);
		do
		{
			//cleardevice();
			Game(&snaker, &food);
			Sleep(snaker.s);
			
		}while (snaker.flag);
		Sleep(1000);
		cleardevice();
	}
	return 0;
}