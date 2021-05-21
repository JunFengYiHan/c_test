#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

void GameInit(Snaker* snaker)
{
	initgraph(640, 480/*,SHOWCONSOLE*/);//图像大小
	snaker->size = 3;
	snaker->dir = RIGHT;
	snaker->speed = 10;
	for (int i = 0; i < snaker->size; i++) {
		snaker->coor[i].x = 320 - i*10;
		snaker->coor[i].y = 240 ;
	}
}

void GameDraw(Snaker* snaker) 
{
	//双缓冲绘图防屏闪
	BeginBatchDraw();//双缓冲开始
	setbkcolor(RGB(91, 97, 105));//设置背景颜色
	cleardevice();//清屏
	//setfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色GREEN
	setfillcolor(GREEN);//设置蛇的颜色
	for (int i = 0; i < snaker->size; i++) {
		solidcircle(snaker->coor[i].x, snaker->coor[i].y, 5);
	}
	EndBatchDraw();//双缓冲结束
}

void SnakerMove(Snaker* snaker)
{
	int i = 0;
	for (i = snaker->size-1; i > 0 ; i--) {
		snaker->coor[i] = snaker -> coor[i -1];
	}

	switch (snaker->dir) {
			case UP:
				snaker->coor[0].y-=snaker->speed;
				if (snaker->coor[0].y  <= 0) {
					snaker->coor[0].y = 480;
				}
				break;
			case DOWN:
				snaker->coor[0].y+= snaker->speed;
				if (snaker->coor[0].y  >= 480) {
					snaker->coor[0].y = 0;
				}
				break;
			case LEFT:
				snaker->coor[0].x-= snaker->speed;
				if (snaker->coor[0].x <= 0) {
					snaker->coor[0].x = 640;
				}
				break;
			case RIGHT:
				snaker->coor[0].x+= snaker->speed;
				if (snaker->coor[0].x  >= 640) {
					snaker->coor[0].x = 0;
				}
				break;
			default:
				break;
	}
}

void keyboard(Snaker* snaker)
{
	//检查键盘是否有输入
	if (_kbhit()) {
		//读取一个字符
		switch (_getch()) {
		case 'w':
		case 'W':
		case 72://键值
			if (snaker->dir != DOWN) {
				snaker->dir = UP;
			}
			break;
		case 's':
		case 'S':
		case 80:
			if (snaker->dir != UP) {
				snaker->dir = DOWN;
			}			
			break;
		case 'a':
		case 'A':
		case 75:
			if (snaker->dir != RIGHT) {
				snaker->dir = LEFT;
			}			
			break;
		case 'd':
		case 'D':
		case 77:
			if (snaker->dir != LEFT) {
				snaker->dir = RIGHT;
			}
			break;
		default:
			break;
		}
	}
}
