#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

void GameInit(Snaker* snaker)
{
	initgraph(640, 480/*,SHOWCONSOLE*/);//ͼ���С
	snaker->size = 3;
	snaker->dir;
	snaker->speed = 10;
	for (int i = 0; i < snaker->size; i++) {
		snaker->coor[i].x = 320 - i*10;
		snaker->coor[i].y = 240 ;
	}
	
}

void GameDraw(Snaker* snaker) 
{

	BeginBatchDraw();//˫���忪ʼ
	setbkcolor(RGB(91, 97, 105));//���ñ�����ɫ
	cleardevice();//����
	setfillcolor(GREEN);
	for (int i = 0; i < snaker->size; i++) {
		solidcircle(snaker->coor[i].x, snaker->coor[i].y, 5);
	}
	EndBatchDraw();//˫�������
}

void SnakerMove(Snaker* snaker)
{
	snaker->coor[0].x++;
	int i = 0;
	for (i = 0; i < snaker->size - 1; i++) {
		/*snaker->coor[i].x = snaker->coor[i+1].x;
		snaker->coor[i].y = snaker->coor[i+1].y;*/
	}
}