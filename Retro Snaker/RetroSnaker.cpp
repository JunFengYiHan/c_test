#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"
int menu() {
	settextcolor(LIGHTGREEN);
	settextstyle(25, 0, "宋体");
flag:
	outtextxy(LENGTH / 2-100, WIDTH / 2 - 100, "1.开始游戏");
	outtextxy(LENGTH / 2-100, WIDTH / 2 -50, "2.退出游戏");
	/*outtextxy(LENGTH / 2-100, WIDTH / 2 -50, "3.游戏简介");*/
	switch (_getch())
	{
	case '1':
		return 1;
	case '2':
		return 0;
 	default:
		cleardevice();
		outtextxy(LENGTH / 2 - 200, WIDTH / 2 - 100, "输入有误请重新输入！");
		Sleep(1000);
		cleardevice();
		goto flag;
	}
}

void Init(Snaker* snaker , Food* food)
{
	//播放音乐
	mciSendString(TEXT("open ./bgm.mp3 alias BGM"), 0, 0, 0);
	mciSendString(TEXT("play BGM repeat"), 0, 0, 0);
	snaker->grade = 0;
	snaker->size = 10;
	snaker->dir = RIGHT;
	snaker->speed = 10;
	snaker->flag = 1;
	//snaker->speed = 10;
	//snaker->r = 5;圆形蛇半径
	snaker->a = 10;//矩形蛇边长
	snaker->s = 60;
	for (int i = 0; i < snaker->size; i++) {
		snaker->coor[i].x = LENGTH / 2 - i * 10;
		//snaker->coor[i].x = LENGTH / 2 - i * 10;
		snaker->coor[i].y = WIDTH / 2;
	}
	//矩形蛇
	food->coor.x = rand() % (LENGTH / 10) * 10;
	food->coor.y = rand() % (WIDTH / 10) * 10;
	/*food->coor.x = rand() % LENGTH;
	food->coor.y = rand() % WIDTH;*///圆形蛇
	food->color = RGB(rand() % 256, rand() % 256, rand() % 256);//食物颜色随机
	//snaker->color = food->color;//初始化蛇的颜色
	food->flag = 1;
	//food->r = 5;//圆形食物
	food->a = 10;//矩形食物
}
void ShowGrade(Snaker* snaker)
{
	char grade[20];
	sprintf(grade, "分数：%d", snaker->grade);
	settextcolor(LIGHTGREEN);
	settextstyle(25, 0, "宋体");
	outtextxy(LENGTH + 70, 100, grade);
}
void GameDraw(Snaker* snaker, Food* food)
{
	//双缓冲绘图防屏闪
	BeginBatchDraw();//双缓冲开始
	setbkcolor(RGB(91, 97, 105));//设置背景颜色
	cleardevice();//清屏
	//etfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色GREEN
	for (int i = 0; i < snaker->size; i++) {
		setfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色
		//无边框蛇
		/*solidrectangle(snaker->coor[i].x, snaker->coor[i].y,
			snaker->coor[i].x + 10, snaker->coor[i].y + 10);*/
		//有边框蛇
		fillrectangle(snaker->coor[i].x, snaker->coor[i].y,
			snaker->coor[i].x + snaker->a, snaker->coor[i].y + snaker->a);

	}
	ShowGrade(snaker);
	setfillcolor(food->color);//设置食物的颜色
	fillrectangle(food->coor.x, food->coor.y, food->coor.x + food->a, food->coor.y + food->a);
	EndBatchDraw();//双缓冲结束
}
//void GameDraw(Snaker* snaker,Food* food) //圆形蛇
//{
//	//双缓冲绘图防屏闪
//	BeginBatchDraw();//双缓冲开始
//	setbkcolor(RGB(91, 97, 105));//设置背景颜色
//	cleardevice();//清屏
//	//etfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色GREEN
//	setfillcolor(GREEN);//设置蛇的颜色
//	//绘制蛇
//	//solidcircle(snaker->coor[0].x, snaker->coor[0].y, snaker->r *2);
//	/*for (int i = 1; i < snaker->size; i++) {
//		solidcircle(snaker->coor[i].x, snaker->coor[i].y, snaker->r);
//	}*/
//	for (int i = 0; i < snaker->size; i++) {
//		solidcircle(snaker->coor[i].x, snaker->coor[i].y, snaker->r);
//	}
//	//绘制食物
//  setfillcolor(food->color);//设置食物的颜色
//	solidcircle(food->coor.x, food->coor.y, food->r);//圆形食物
//	EndBatchDraw();//双缓冲结束
//}
// 
void SnakerMove(Snaker* snaker)//不能穿墙
{
	int i = 0;
	for (i = snaker->size - 1; i > 0; i--) {
		snaker->coor[i] = snaker->coor[i - 1];
	}
	switch (snaker->dir) {
	case UP:
		snaker->coor[0].y -= snaker->speed;
		break;
	case DOWN:
		snaker->coor[0].y += snaker->speed;
		break;
	case LEFT:
		snaker->coor[0].x -= snaker->speed;
		break;
	case RIGHT:
		snaker->coor[0].x += snaker->speed;
		break;
	default:
		break;
	}
}
//void SnakerMove(Snaker* snaker)//穿墙
//{
//	int i = 0;
//	for (i = snaker->size - 1; i > 0; i--) {
//		snaker->coor[i] = snaker->coor[i - 1];
//	}
//
//	switch (snaker->dir) {
//	case UP:
//		snaker->coor[0].y -= snaker->speed;
//		if (snaker->coor[0].y <= 0) {
//			snaker->coor[0].y = WIDTH;
//		}
//		break;
//	case DOWN:
//		snaker->coor[0].y += snaker->speed;
//		if (snaker->coor[0].y >= WIDTH) {
//			snaker->coor[0].y = 0;
//		}
//		break;
//	case LEFT:
//		snaker->coor[0].x -= snaker->speed;
//		if (snaker->coor[0].x <= 0) {
//			snaker->coor[0].x = LENGTH;
//		}
//		break;
//	case RIGHT:
//		snaker->coor[0].x += snaker->speed;
//		if (snaker->coor[0].x >= LENGTH) {
//			snaker->coor[0].x = 0;
//		}
//		break;
//	default:
//		break;
//	}
//}
//圆形蛇
//void SnakerMove(Snaker* snaker)
//{
//	int i = 0;
//	for (i = snaker->size-1; i > 0 ; i--) {
//		snaker->coor[i] = snaker -> coor[i -1];
//	}
//
//	switch (snaker->dir) {
//			case UP:
//				snaker->coor[0].y-=snaker->speed;
//				if (snaker->coor[0].y  <= 0) {
//					snaker->coor[0].y = WIDTH;
//				}
//				break;
//			case DOWN:
//				snaker->coor[0].y+= snaker->speed;
//				if (snaker->coor[0].y  >= WIDTH) {
//					snaker->coor[0].y = 0;
//				}
//				break;
//			case LEFT:
//				snaker->coor[0].x-= snaker->speed;
//				if (snaker->coor[0].x <= 0) {
//					snaker->coor[0].x = LENGTH;
//				}
//				break;
//			case RIGHT:
//				snaker->coor[0].x+= snaker->speed;
//				if (snaker->coor[0].x  >= LENGTH) {
//					snaker->coor[0].x = 0;
//				}
//				break;
//			default:
//				break;
//	}
//}

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
	//矩形蛇
	if (snaker->coor[0].x==food->coor.x&&snaker->coor[0].y==food->coor.y) {
		snaker->size++;
		food->flag = 0;
		snaker->grade++;
		while (!food->flag) {//食物不存在刷新食物
			food->coor.x = rand() % (LENGTH / 10) * 10;
			food->coor.y = rand() % (WIDTH /10 ) *10;
			food->flag = 1;//刷新食物
			for (int i = 0; i < snaker->size; i++) {
				if (food->coor.x == snaker->coor[i].x && food->coor.y == snaker->coor[i].y) {
					food->flag = 0;//食物出现在蛇身上刷新食物
				}
			}
		}
		
	}
	//圆形蛇
	//if (snaker->coor[0].x >= food->coor.x - food->r 
	//	&& snaker->coor[0].x <= food->coor.x + food->r
	//	&& snaker->coor[0].y >= food->coor.y - food->r
	//	&& snaker->coor[0].y <= food->coor.y + food->r) {
	//	snaker->size++;
	//	food->coor.x = rand() % (LENGTH / 10 - 4) * 10 + 20;
	//	food->coor.y = rand() % (WIDTH /10 - 4)*10 + 20;
	//	snaker->color = food->color;//调整蛇的颜色和吃掉的食物一样
	//	food->color = rand() % 256;
	//	//food->flag = 0;
	//}
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
	outtextxy(LENGTH / 2 - 100, WIDTH / 2 - 100, "再次点击Esc退出游戏");
	outtextxy(LENGTH / 2 - 100, WIDTH / 2 - 50, "按任意键继续");
	switch (_getch()) {
	case 27:
		exit(0);
		break;
	default:
		break;
	}
}
void SnakerDie(Snaker* snaker, Food* food) {
	if (snaker->coor[0].x >= LENGTH || snaker->coor[0].x < 0 ||
		snaker->coor[0].y >= WIDTH || snaker->coor[0].y < 0) {
		settextcolor(LIGHTGREEN);
		settextstyle(80, 0, _T("宋体"));
		setbkmode(TRANSPARENT);
		outtextxy(240, 220, _T("游戏失败"));
		snaker->flag = 0;
		mciSendString(TEXT("close BGM"), 0, 0, 0);
		return;
	}
	for (int i = 1; i < snaker->size; i++) {
		if (snaker->coor[0].x == snaker->coor[i].x && snaker->coor[0].y == snaker->coor[i].y) {
			settextcolor(LIGHTGREEN);
			settextstyle(60, 0, _T("宋体"));
			setbkmode(TRANSPARENT);
			outtextxy(100, 100, _T("游戏失败"));
			snaker->flag = 0;
			mciSendString(TEXT("close BGM"), 0, 0, 0);
			return;
		}
	}
}