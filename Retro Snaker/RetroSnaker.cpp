#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"

void Init(Snaker* snaker , Food* food)
{
	
	initgraph(LENGTH, WIDTH/*,SHOWCONSOLE*/);//图像大小
	snaker->size = 10;
	snaker->dir = RIGHT;
	snaker->speed = 5;
	//snaker->speed = 10;
	snaker->r = 5;
	snaker->s = 100;
	for (int i = 0; i < snaker->size; i++) {
		snaker->coor[i].x = LENGTH / 2 - i * 5;
		//snaker->coor[i].x = LENGTH / 2 - i * 10;
		snaker->coor[i].y = WIDTH / 2;
	}
	food->coor.x = rand() % LENGTH;
	food->coor.y = rand() % WIDTH;
	food->color = RGB(rand() % 256, rand() % 256, rand() % 256);
	//food->flag = 1;
	food->r = 5;
	mciSendString(TEXT("open ./bgm.mp3 alias BGM"), 0, 0, 0);
	mciSendString(TEXT("play BGM repeat"), 0, 0, 0);
}

void GameDraw(Snaker* snaker,Food* food) 
{
	//双缓冲绘图防屏闪
	BeginBatchDraw();//双缓冲开始
	setbkcolor(RGB(91, 97, 105));//设置背景颜色
	cleardevice();//清屏
	//etfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色GREEN
	setfillcolor(GREEN);//设置蛇的颜色
	//绘制蛇
	//solidcircle(snaker->coor[0].x, snaker->coor[0].y, snaker->r *2);
	/*for (int i = 1; i < snaker->size; i++) {
		solidcircle(snaker->coor[i].x, snaker->coor[i].y, snaker->r);
	}*/
	for (int i = 0; i < snaker->size; i++) {
		solidcircle(snaker->coor[i].x, snaker->coor[i].y, snaker->r);
	}
	//绘制食物
	solidcircle(food->coor.x, food->coor.y, food->r);
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
					snaker->coor[0].y = WIDTH;
				}
				break;
			case DOWN:
				snaker->coor[0].y+= snaker->speed;
				if (snaker->coor[0].y  >= WIDTH) {
					snaker->coor[0].y = 0;
				}
				break;
			case LEFT:
				snaker->coor[0].x-= snaker->speed;
				if (snaker->coor[0].x <= 0) {
					snaker->coor[0].x = LENGTH;
				}
				break;
			case RIGHT:
				snaker->coor[0].x+= snaker->speed;
				if (snaker->coor[0].x  >= LENGTH) {
					snaker->coor[0].x = 0;
				}
				break;
			default:
				break;
	}
}

void Keyboard(Snaker* snaker)
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
		case ' ':
			if (snaker->s) {
				snaker->s -= 10;
			}
			break;
		case 'l':
		case 'L':
			snaker->s += 10;
			break;
		case 27:Esc();
			break;
		default:
			break;
		}
	}
}

void EatFood(Snaker* snaker, Food* food)
{
	if (snaker->coor[0].x >= food->coor.x - food->r 
		&& snaker->coor[0].x <= food->coor.x + food->r
		&& snaker->coor[0].y >= food->coor.y - food->r
		&& snaker->coor[0].y <= food->coor.y + food->r) {
		snaker->size++;
		food->coor.x = rand() % (LENGTH / 10 - 4) * 10 + 20;
		food->coor.y = rand() % (WIDTH /10 - 4)*10 + 20;
		//food->flag = 0;
	}
	//if (snaker->coor[0].x + snaker->r >= food->coor.x - food->r
	//	&& snaker->coor[0].x - snaker->r <= food->coor.x + food->r
	//	&& snaker->coor[0].y + snaker->r >= food->coor.y - food->r
	//	&& snaker->coor[0].y - snaker->r <= food->coor.y + food->r) {
	//	snaker->size++;
	//	//food->flag = 0;
	//	food->coor.x = rand() % (LENGTH /10 - 4)*10+ 20;
	//	food->coor.y = rand() % (WIDTH /10 - 4)*10 + 20;
	//	
	//}
}
void Esc()
{
	//Esc键值27
	switch (_getch()) {
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}
