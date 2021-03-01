#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
////关于数据在内存中的存储形式--调内存观察--存储为2进制，观察时为16进制
////整数--补码形式
////权重高的放在低地址为大端存储---表现为顺着存
////权重高的放在高地址为小端存储---表现为倒着存
////浮点数--S E M（E无符号整数）（M只保留小数部分，整数 1 省略）
////实际数据表示--(-1)^S * M * 2^E
////在内存中的存储形式 S(1 bit) E(8/11 bit) M(23/52 bit) 
////中间值127/1023
////存入需要加中间值以表示正负数之分
//int main()
//{
//	int a = 0x11223344;//十六进制整数
//	float b = 5.5;//101.1
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char* p = "abcdef";//常量字符串不能被修改
//	*p = 'W';//会发生段错误
//	printf("%s",p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n, i, flag;
//    scanf("%d", &n);
//    double item, sum;
//    sum = 0;
//    flag = 1;
//    for (i = 1; i <= n; i++) {
//        item = flag * i * 1.0 / (2 * i - 1);
//        sum = sum + item;
//        flag = -flag;
//    }
//    printf("%.3lf", sum);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int(*p1)[5] = &arr1;//数组指针
//	int i = 0;
//
//	for (i = 0; i < 5; i++) {
//		printf("%d ", *(*p1 + i));
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", c, b, a);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int tmp = 0;
//	while (a%b) {
//		tmp = a % b ;
//		a = b;
//		b = tmp;
//	}
//	printf("%d", b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 99; i++) {
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%f", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int max = 0;
//	int n = 0;
//	scanf("%d", &max);
//	int i = 0;
//	for (i = 0; i < 9; i++) {
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
////查找数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int left = 0;
//	while (left <= right) {
//		int mid = (right + left) / 2;
//		if (n > arr[mid])
//			left = mid+1;
//		else if (n < arr[mid])
//			right = mid+1;
//		else {
//			printf("找到了，下标是：%d\n", mid );
//			break;//输出数组下标
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
////猜数字游戏
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int mynumber = rand() % 100 + 1;
//	int yournuumber = 0;
//	printf("本程序随机生成一个1-100之间的数字请你猜猜该数字\n");
//	printf("请输入你猜测的数字：\n");
//	while (1)
//	{
//		scanf("%d", &yournuumber);
//		if (yournuumber > mynumber)
//			printf("猜大了\n");
//		else if (yournuumber < mynumber)
//			printf("猜小了\n");
//		else {
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//char* mystrcpy(char* dest, const char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*(dest + 1) = '\0';
//	return dest;
//}
//int main()
//{
//	char* (*pf)(char*, const char*) = &mystrcpy;
//	char* (*pfArr[4])(char*, const char*) = { mystrcpy,mystrcpy,mystrcpy,mystrcpy };
//
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		if(prime(i))
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int leap(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	
//	while(~scanf("%d", &year)){//此处留有一个为什么要输入三个 ^Z 才能结束程序的疑问
//		
//		int ret = leap(year);
//		if (ret == 1)
//			printf("是闰年\n");
//		else
//			printf("不是闰年\n");
//		//scanf("%d", &year);
//	}
//	return 0;
//}

//#include<stdio.h>
//void exchange(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchange(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//#include<stdio.h>
//
//void multiplycation(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %-d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	multiplycation(n);
//	return 0;
//}

//#include<stdio.h>
//void print_num(int n)
//{
//	if (n >= 10)
//		print_num(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_num(n);
//	return 0;
//}

//#include<stdio.h>
////求阶乘--不考虑溢出
//int Fact_1(int n)//使用递归
//{
//	if (n > 1) {
//		return n * Fact_1(n - 1);
//	}
//	else {
//		return 1;
//	}
//}
//int Fact_2(n)//不使用递归
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++) {
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fact_1(n);
//	printf("%d\n", sum);
//	sum = Fact_2(n);
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////模拟strlen函数
//int my_strlen_1(char arr[])//递归模拟
//{
//	if (*arr != '\0')
//		return 1 + my_strlen_1(arr + 1);
//	else {
//		return 0;
//	}
//}
//int my_strlen_2(char* arr)//非递归实现
//{
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";//"abcdef\0"
//	printf("%d\n", my_strlen_1(arr));
//	printf("%d\n", my_strlen_2(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char arr[5][9] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 8; j++) {
//			//scanf("%c", &arr[i][j]);这里就不输入了，直接初始化
//			arr[i][j] = '$';
//		}
//	}
//	char(*p)[9] = arr;//创建一个数组指针变量，传入数组arr首元素（第一行）的地址
//	for (i = 0; i < 4; i++) {
//		printf("%s\n", *p++);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void reverse_string_1(char* string, int n)//指针实现
//{
//	int left = 0;
//	int right = n-1;
//	while (left<right) {
//		char ch = *(string + left);
//		*(string + left) = *(string + right);
//		*(string + right) = ch;
//		left++;
//		right--;
//	}
//}
//void reverse_string_2(char* str, int n)//递归实现
//{
//	int right = n - 1;
//	static int left = 0;
//	if (left < right) {
//		char ch = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = ch;
//		left++;
//		reverse_string_2(str , n - 1);
//	}
//}
//int main()//字符串逆序
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	reverse_string_1(arr, len );
//	printf("%s\n", arr);
//	reverse_string_2(arr, len);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//int Is_add(int n)
//{
//	if (n >= 10)
//		return n % 10 + Is_add(n / 10);
//	else
//		return n;
//}
//int main()//计算一个数的每位之和
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Is_add(n);
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int CF(int n, int k)
//{
//	if (k > 0)
//		return n * CF(n, k-1);
//	else
//		return 1;
//}
//int main()//递归实现n的k次方
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int sum = CF(n, k);
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int LF_1(int n)//递归实现
//{
//	if (n > 2)
//		return LF_1(n-2) + LF_1(n - 1);
//	else
//		return 1;
//}
//int LF_2(int n)//非递归实现
//{
//	int arr[100] = { 1,1 };
//	int i = 0;
//	for (i = 2; i < n; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	return arr[n-1];
//}
//int main()//计算第n个斐波那契数的值
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", LF_1(n));
//	printf("%d\n", LF_2(n));
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void init(int arr[], int sz)//初始化函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)//打印函数
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)//数组元数逆置函数
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	init(arr1, sz);
//	print(arr1, sz);
//
//	print(arr2, sz);
//	reverse(arr2, sz);
//	print(arr2, sz);
//	return 0;
//}
//
//#include<stdio.h>
//void Exchange(char* arr1, char* arr2)//交换两个长度一样的字符数组
//{
//	while (*arr1 || *arr2) {
//		char ch = *arr1;
//		*arr1 = *arr2;
//		*arr2 = ch;
//		arr1++;
//		arr2++;
//	}
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "efgh";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	Exchange(arr1, arr2);
//	
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;//a=5
//	c = ++a;//a=6,c=6
//	//   7    8    7    8
//	b = ++c, c++, ++a, a++;//b=8
//	//8+8+7
//	b += a++ + c;
//	//   9                            9  23 8
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//
//int main()//不创建第三个变量交换两个变量的值
//{
//	int a = 3;//011
//	int b = 5;//101
//	// ^ 按位异或，相同为0，相异为1
//	printf("%d %d\n", a, b);
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()//求两个整数二进制位中有多个不同位
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;//22 33
//	scanf("%d %d", &a, &b);
//	//010110
//	//100001
//	//110111--1+2+4+16+32=55
//	int c = a ^ b;
//	while (c) {
//		c = c & (c - 1);
//		count++;
//		//c--;
//	}
//	//count++;
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//
//int main()//获取一个整数的二进制奇数位和偶数位，分别打印
//{
//	int n = 0;//输入26 011010
//	scanf("%d", &n);//100  011
//	int i = 0;
//	for (i = 31; i > 0; i -= 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//0x13
//	//0000 0000 0000 0000 0000 0000 0001 0011
//	//1111 1111 1111 1111 1111 1111 1110 1100
//	//f     f    f    f    f     f   e    c
//	printf("%0x", ~0x13);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d ", p[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//char* reverse(char* str)
//{
//    int len = strlen(str);
//    int left = 0;
//    int right = len - 1;
//    char* ret = str;
//    while (left < right)
//    {
//        char tmp = *(str + left);
//        *(str + left) = *(str + right);
//        *(str + right) = tmp;
//        left++;
//        right--;
//    }
//    return ret;
//}
//int main()//字符串逆置
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    reverse(arr);
//    printf("%s", arr);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int s = 0;
//	for (i = 0; i < 5; i++)
//	{
//		s = 10 * s + a;
//		sum += s;
//	}
//	printf("%d\n", sum);//24,690
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()//打印水仙花数
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 1;
//		int n = i;
//		int sum = 0;
//		while (n/=10)
//		{
//			count++;
//		}
//		int j = i;
//		while (j)
//		{
//			n = j % 10;
//			sum += pow(n, count);
//			j /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()//打印菱形
//{
//	int n = 0;
//	scanf("%d", &n);//输入菱形边长
//	//上半部分
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n\n");
//	}
//	//下半部分
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j < 2*(n-i)-3; j++)
//		{
//			printf("* ");
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//{
//	int n = 0;//可乐数
//	int count = 0;//空瓶数
//	int money = 0;//钱数
//	int num = 0;//换的可乐数
//	scanf("%d", &money);
//	n = money;
//	count = money;
//	while (count >= 2)
//	{
//		num = count / 2;
//		n += num;
//		count -= num;
//		//count = count / 2 + count % 2;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//int main()//越界访问导致死循环打印
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()//模拟实现 strlen
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()//模拟实现 strcpy
//{
//	char arr1[] = "hijkmld";
//	char arr2[] = "abcdefg";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//
//void swap(int* str, int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		if (*(str + left) % 2 == 0)
//		{
//			while (left<right)
//			{
//				if (*(str + right) % 2 == 1)
//				{
//					int tmp = *(str + left);
//					*(str + left) = *(str + right);
//					*(str + right) = tmp;
//					break;
//				}
//					right--;
//			}
//		}
//			left++;
//	}
//}
//int main()//调整数组使奇数全部都位于偶数前面。
//{
//	int arr[] = { 2,4,5,6,7,1,3,9,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>

int main()//打印杨辉三角
{
	int arr[30][30] = { 0 };
	int i = 0;
	int n = 0;
	scanf("%d", &n);//打印行数
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}