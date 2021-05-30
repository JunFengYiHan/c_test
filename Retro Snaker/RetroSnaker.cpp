#define _CRT_SECURE_NO_WARNINGS

#include"RetroSnaker.h"
int menu() {

	settextcolor(LIGHTGREEN);
	setbkmode(TRANSPARENT);//混合背景
	settextstyle(25, 0, "宋体");
//flag:
	BeginBatchDraw();
	IMAGE img;
	loadimage(&img, "./背景.jpg", 0, 0);
	putimage(0, 0, &img);
	/*outtextxy(LENGTH / 2-70, WIDTH / 2 - 100, "1.开始游戏");
	outtextxy(LENGTH / 2-70, WIDTH / 2 -50, "0.退出游戏");*/
	outtextxy(LENGTH / 2 - 90, WIDTH / 2 - 100, "欢迎来到贪吃蛇小游戏");
	outtextxy(LENGTH / 2 - 70, WIDTH / 2 - 50, "按任意键开始游戏");
	EndBatchDraw();
	/*outtextxy(LENGTH / 2-100, WIDTH / 2 -50, "3.游戏简介");*/
	_getch();
	return 1;
	//switch (_getch())
	//{
	//case '1':
	//	return 1;
	//case '0':
	//	return 0;
 //	default:
	//	//BeginBatchDraw();
	//	cleardevice();
	//	putimage(0, 0, &img);
	//	outtextxy(LENGTH / 2 - 200, WIDTH / 2 - 100, "输入有误请重新输入！");
	//	Sleep(1000);
	//	cleardevice();
	//	//EndBatchDraw();
	//	goto flag;
	//}
}

void Init(Snaker* snaker , Food* food)
{
	//播放音乐
	mciSendString(TEXT("open ./bgm.mp3 alias BGM"), 0, 0, 0);
	mciSendString(TEXT("play BGM repeat"), 0, 0, 0);
	snaker->grade = 0;//初始分数为0
	snaker->size = 5;//初始长度为5
	snaker->dir = RIGHT;//开始向右
	snaker->speed = 10;//默认速度为10
	snaker->flag = 1;//默认存活
	//snaker->speed = 10;
	//snaker->r = 5;圆形蛇半径
	snaker->a = 10;//矩形蛇边长
	snaker->s = 100;//刷新频率
	for (int i = 0; i < snaker->size; i++) {
		snaker->coor[i].x = LENGTH / 2 - i * 10;
		//snaker->coor[i].x = LENGTH / 2 - i * 10;
		snaker->coor[i].y = WIDTH / 2;
	}
	//矩形蛇
	food->coor.x = rand() % (LENGTH / 10-4) * 10+20;//食物位置随机
	food->coor.y = rand() % (WIDTH / 10-4) * 10+20;
	/*food->coor.x = rand() % LENGTH;
	food->coor.y = rand() % WIDTH;*///圆形蛇
	food->color = RGB(rand() % 256, rand() % 256, rand() % 256);//食物颜色随机
	//snaker->color = food->color;//初始化蛇的颜色
	food->flag = 1;//食物存在
	//food->r = 5;//圆形食物
	food->a = 10;//矩形食物
}
void ShowSidebar(Snaker* snaker)//侧边栏
{
	setlinecolor(WHITE);
	line(LENGTH,0 ,LENGTH,WIDTH);
	char grade[20];
	char speed[20];
	char score[20];
	char length[20];
	sprintf(length, "当前长度：%d", snaker->size);
	sprintf(speed, "当前速度：%d",150 - snaker->s);
	sprintf(grade, "当前得分：%d", snaker->grade);
	sprintf(score, "食物分值：%d",15 - snaker->s/10);
	settextcolor(LIGHTGREEN);
	settextstyle(25, 0, "宋体");
	outtextxy(LENGTH + 20, 10, length);
	outtextxy(LENGTH + 20, 50, grade);
	outtextxy(LENGTH + 20, 90, speed);
	outtextxy(LENGTH + 20, 130, score);
	outtextxy(LENGTH + 20, 170, "按Esc键暂停");
	outtextxy(LENGTH + 20, 210, "W向上");
	outtextxy(LENGTH + 20, 250, "S向下");
	outtextxy(LENGTH + 20, 290, "A向左");
	outtextxy(LENGTH + 20, 330, "D向右");
	outtextxy(LENGTH + 20, 370, "空格加速");
	outtextxy(LENGTH + 20, 410, "L键减速");
}
void GameDraw(Snaker* snaker, Food* food)//方形蛇
{
	
	//批量绘制绘图防屏闪
	BeginBatchDraw();//双缓冲开始
	cleardevice();//清屏
	/*IMAGE img;
	loadimage(&img, "背景.jpg", 0, 0);
	putimage(0, 0, &img);*/
	setbkcolor(RGB(91, 97, 105));//设置背  ，景颜色
	//etfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色GREEN
	for (int i = 0; i < snaker->size; i++) {
		//setfillcolor(RGB(rand()%256, rand() % 256, rand() % 256));//设置蛇的颜色随机
		setfillcolor(HSVtoRGB(7.0*i,0.9,1.0));//设置蛇的颜色渐变
		//无边框蛇
		/*solidrectangle(snaker->coor[i].x, snaker->coor[i].y,
			snaker->coor[i].x + 10, snaker->coor[i].y + 10);*/
		//有边框蛇
		fillrectangle(snaker->coor[i].x, snaker->coor[i].y,
			snaker->coor[i].x + snaker->a, snaker->coor[i].y + snaker->a);
			/*FlushBatchDraw();*/
	}
	ShowSidebar(snaker);//打印侧边栏
	
	setfillcolor(food->color);//设置食物的颜色
	fillrectangle(food->coor.x, food->coor.y, food->coor.x + food->a, food->coor.y + food->a);
	EndBatchDraw();//双缓冲结束，输出图像
	
	
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
			if (snaker->s < 140) {
				snaker->s += 10;
			}
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
	if (snaker->coor[0].x == food->coor.x && snaker->coor[0].y == food->coor.y) {
		snaker->size++;
		food->flag = 0;
		/*if (snaker->s > 80) {
			snaker->grade++;
		}
		else {*/
			snaker->grade+=15-snaker->s/10;
		/*}*/
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
		food->color = RGB(rand() % 256, rand() % 256, rand() % 256);//食物颜色随机
		//cleardevice();//清屏
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
	setbkmode(TRANSPARENT);//混合背景
	IMAGE img;
	loadimage(&img, "背景.jpg", 0, 0);
	putimage(0, 0, &img);
	outtextxy(LENGTH / 2 - 100, WIDTH / 2 - 100, "再次点击Esc退出游戏");
	outtextxy(LENGTH / 2 - 100, WIDTH / 2 - 50, "按任意键继续");
	switch (_getch()) {
	case 27://Esc键值27
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
		outtextxy(240, 220, _T("游戏结束"));
		//char grade[20];
		/*sprintf(grade, "总得分：%d", snaker->grade);
		settextcolor(LIGHTGREEN);
		settextstyle(25, 0, "宋体");
		outtextxy(240, 240, grade)*/;
		snaker->flag = 0;
		mciSendString(TEXT("close BGM"), 0, 0, 0);
		return;
	}
	for (int i = 1; i < snaker->size; i++) {
		if (snaker->coor[0].x == snaker->coor[i].x && snaker->coor[0].y == snaker->coor[i].y) {
			settextcolor(LIGHTGREEN);
			settextstyle(60, 0, _T("宋体"));
			setbkmode(TRANSPARENT);
			outtextxy(100, 100, _T("游戏结束"));
			//char grade[20];
			/*sprintf(grade, "总得分：%d", snaker->grade);
			settextcolor(LIGHTGREEN);
			settextstyle(25, 0, "宋体");
			outtextxy(240, 240, grade)*/;
			snaker->flag = 0;
			mciSendString(TEXT("close BGM"), 0, 0, 0);
			return;
		}
	}
}