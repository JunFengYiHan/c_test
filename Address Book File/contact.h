#pragma once

#define name_MAX 20
#define sex_MAX 5
#define tele_MAX 12
#define addr_Max 30


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<errno.h>

typedef struct Stu
{
	char name[name_MAX];
	int age;
	char sex[sex_MAX];
	char tele[tele_MAX];
	char addr[addr_Max];
}Stu;

typedef struct Con
{
	int size;
	int num;
	struct Stu* data;
}Con;

enum
{
	Exit,
	Add,
	Delete,
	Search,
	Modify,
	Show,
	Sort,
	Save
};

//初始化
void IntiContact(struct Con* ps);
//增加信息
void AddContact(struct Con* ps);
//展示信息
void ShowContact(const struct Con* ps);
//删除信息
void DelContact(struct Con* ps);
//查找信息
void SearContact(const struct Con* ps);
//修改信息
void ModifyConstact(struct Con* ps);
//排序信息
void SortContact(struct Con* ps);
//输出信息到文件
void SaveContact(struct Con* ps);
//从文件中读取信息
void ReadinContact(struct Con* ps);