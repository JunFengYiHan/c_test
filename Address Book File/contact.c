#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"

void IntiContact(struct Con* ps)
{
	Stu* ptr = (Stu*)malloc(10*sizeof(Stu));
	if (ptr != NULL)
	{
		ps->data  = ptr;
		//memset(ps->data, 0, sizeof(ps->data[0]));
		ps->size = 0;
		ps->num = 10;
		ptr = NULL;
		ReadinContact(ps);
	}
}
void Addmem(Con* ps)
{
	ps->num+=10;
	Stu* ptr = (Stu*)realloc(ps->data , (ps->num) * sizeof(Stu));
	if (ptr != NULL)
	{
		ps->data = ptr;
		//printf("扩容成功\n");
	}
	else
	{
		printf("Addmem::%s", strerror(errno));
		return;
	}
}
void AddContact(Con* ps)
{
	if (ps->num <= ps->size )//内存不足，增加内存
	{
		Addmem(ps);
		//printf("扩容成功\n");
	}
		printf("请输入姓名>;");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄>;");
		scanf("%d", &ps->data[ps->size].age);
		printf("请输入性别>;");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话>;");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入住址>;");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
}

void ShowContact(const struct Con* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-10s%-5s%-5s%-15s%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s%-5d%-5s%-15s%-20s\n",
				ps->data [i].name ,
				ps->data[i].age , 
				ps->data [i].sex ,
				ps->data [i].tele ,
				ps->data [i].addr );
		}
	}
}
int FindContact(const struct Con* ps)//实际的查找函数
{
	char name[name_MAX] = { 0 };
	scanf("%s", name);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct Con* ps)
{
	printf("请输入要删除人的姓名>:");
	int i= FindContact(ps);
	if(i==-1)
	{
		printf("暂无此人信息\n");
	}
	else
	{
		for (i; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i+1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearContact(const struct Con* ps)
{
	printf("请输入要查找人的姓名>:");
	int i = FindContact(ps);
	if (i == -1)
	{
		printf("暂无此人信息\n");
	}
	else
	{
		printf("%-10s%-5s%-5s%-15s%-20s\n", "名字", "年龄", "性别", "电话", "住址");
		printf("%-10s%-5d%-5s%-15s%-20s\n",
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
}

void ModifyConstact(struct Con* ps)
{
	printf("请输入要修改人的名字>;");
	int i = FindContact(ps);
	
	if (i == -1)
	{
		printf("暂无此人信息\n");
	}
	else
	{
		printf("请输入姓名>;");
		scanf("%s", ps->data[i].name);
		printf("请输入年龄>;");
		scanf("%d", &ps->data[i].age);
		printf("请输入性别>;");
		scanf("%s", ps->data[i].sex);
		printf("请输入电话>;");
		scanf("%s", ps->data[i].tele);
		printf("请输入住址>;");
		scanf("%s", ps->data[i].addr);
		printf("修改成功\n");
	}
}

int compare_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
}int compare_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}
void SortContact(struct Con* ps)
{
	char arr[name_MAX] = { 0 };
	printf("请输入排序标准>;(名字或年龄)");
	scanf("%s", arr);
	if (!strcmp("名字", arr))
	{
		qsort(ps->data  , ps->size, sizeof(ps->data[0]), compare_name);
		printf("排序后的信息如下\n");
		ShowContact(ps);
	}
	else if (!strcmp("年龄", arr))
	{
		qsort(ps->data  , ps->size, sizeof(ps->data[0]), compare_age);
		printf("排序后的信息如下\n");
		ShowContact(ps);
	}
	else
	{
		printf("暂无以此为标准的排序功能\n");
	}
}

void SaveContact(struct Con* ps)
{
	FILE* pf = fopen("address book file.txt", "wb");//打开一个文本，进行写入。
	if (pf == NULL)
	{
		printf("SaveContact::%s\n",strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		//fprintf(pf, "%-10s%-5d%-5s%-15s%-20s", ps->data[i].name , ps->data[i].age , ps->data[i].sex , ps->data[i].tele , ps->data[i].addr );
		//以文本形式写入的时候上下两者相同作用
		//上面的输出格式已经规定，不管什么打开方式都是  w
		//下面的输出格式和打开文本时的写入方式一致      w/wb
		fwrite(&(ps->data[i]), sizeof(Stu), 1, pf);
	}
	printf("保存成功\n");
	fclose(pf);
	pf = NULL;
}

void ReadinContact(struct Con* ps)
{
	Stu tmp = { 0 };
	FILE* pf = fopen("address book file.dat", "rb");
	//FILE* pf = fopen("address book file.txt", "r");
	if (pf != NULL)
	{
		while (fread(&tmp, sizeof(Stu), 1, pf))
		{
			Addmem(ps);
			ps->data[ps->size] = tmp;
			ps->size++;
		}
		fclose(pf);
		pf = NULL;
	}
	else
	{
		printf("ReadinContact::%s\n", strerror(errno));
		return;
	}
}