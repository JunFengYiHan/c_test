#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

void GameInit(Snaker* snaker)
{
	initgraph(640, 480/*,SHOWCONSOLE*/);//图像大小
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

	BeginBatchDraw();//双缓冲开始
	setbkcolor(RGB(91, 97, 105));//设置背景颜色
	cleardevice();//清屏
	setfillcolor(GREEN);
	for (int i = 0; i < snaker->size; i++) {
		solidcircle(snaker->coor[i].x, snaker->coor[i].y, 5);
	}
	EndBatchDraw();//双缓冲结束
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