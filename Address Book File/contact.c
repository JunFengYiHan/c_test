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
		//printf("���ݳɹ�\n");
	}
	else
	{
		printf("Addmem::%s", strerror(errno));
		return;
	}
}
void AddContact(Con* ps)
{
	if (ps->num <= ps->size )//�ڴ治�㣬�����ڴ�
	{
		Addmem(ps);
		//printf("���ݳɹ�\n");
	}
		printf("����������>;");
		scanf("%s", ps->data[ps->size].name);
		printf("����������>;");
		scanf("%d", &ps->data[ps->size].age);
		printf("�������Ա�>;");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰>;");
		scanf("%s", ps->data[ps->size].tele);
		printf("������סַ>;");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
}

void ShowContact(const struct Con* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-10s%-5s%-5s%-15s%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
int FindContact(const struct Con* ps)//ʵ�ʵĲ��Һ���
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
	printf("������Ҫɾ���˵�����>:");
	int i= FindContact(ps);
	if(i==-1)
	{
		printf("���޴�����Ϣ\n");
	}
	else
	{
		for (i; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i+1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearContact(const struct Con* ps)
{
	printf("������Ҫ�����˵�����>:");
	int i = FindContact(ps);
	if (i == -1)
	{
		printf("���޴�����Ϣ\n");
	}
	else
	{
		printf("%-10s%-5s%-5s%-15s%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫ�޸��˵�����>;");
	int i = FindContact(ps);
	
	if (i == -1)
	{
		printf("���޴�����Ϣ\n");
	}
	else
	{
		printf("����������>;");
		scanf("%s", ps->data[i].name);
		printf("����������>;");
		scanf("%d", &ps->data[i].age);
		printf("�������Ա�>;");
		scanf("%s", ps->data[i].sex);
		printf("������绰>;");
		scanf("%s", ps->data[i].tele);
		printf("������סַ>;");
		scanf("%s", ps->data[i].addr);
		printf("�޸ĳɹ�\n");
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
	printf("�����������׼>;(���ֻ�����)");
	scanf("%s", arr);
	if (!strcmp("����", arr))
	{
		qsort(ps->data  , ps->size, sizeof(ps->data[0]), compare_name);
		printf("��������Ϣ����\n");
		ShowContact(ps);
	}
	else if (!strcmp("����", arr))
	{
		qsort(ps->data  , ps->size, sizeof(ps->data[0]), compare_age);
		printf("��������Ϣ����\n");
		ShowContact(ps);
	}
	else
	{
		printf("�����Դ�Ϊ��׼��������\n");
	}
}

void SaveContact(struct Con* ps)
{
	FILE* pf = fopen("address book file.txt", "wb");//��һ���ı�������д�롣
	if (pf == NULL)
	{
		printf("SaveContact::%s\n",strerror(errno));
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		//fprintf(pf, "%-10s%-5d%-5s%-15s%-20s", ps->data[i].name , ps->data[i].age , ps->data[i].sex , ps->data[i].tele , ps->data[i].addr );
		//���ı���ʽд���ʱ������������ͬ����
		//����������ʽ�Ѿ��涨������ʲô�򿪷�ʽ����  w
		//����������ʽ�ʹ��ı�ʱ��д�뷽ʽһ��      w/wb
		fwrite(&(ps->data[i]), sizeof(Stu), 1, pf);
	}
	printf("����ɹ�\n");
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