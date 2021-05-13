#pragma once

#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<Windows.h>

#define ROW 20
#define COL 40

#define ROWS ROW+2
#define COLS COL+2


void init(char arr[ROWS][COLS], char ret);
void ptintArr(char arr[ROW][COL]);
void isSurvival(char arr[ROW][COL]);