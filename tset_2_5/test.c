#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
////�����������ڴ��еĴ洢��ʽ--���ڴ�۲�--�洢Ϊ2���ƣ��۲�ʱΪ16����
////����--������ʽ
////Ȩ�ظߵķ��ڵ͵�ַΪ��˴洢---����Ϊ˳�Ŵ�
////Ȩ�ظߵķ��ڸߵ�ַΪС�˴洢---����Ϊ���Ŵ�
////������--S E M��E�޷�����������Mֻ����С�����֣����� 1 ʡ�ԣ�
////ʵ�����ݱ�ʾ--(-1)^S * M * 2^E
////���ڴ��еĴ洢��ʽ S(1 bit) E(8/11 bit) M(23/52 bit) 
////�м�ֵ127/1023
////������Ҫ���м�ֵ�Ա�ʾ������֮��
//int main()
//{
//	int a = 0x11223344;//ʮ����������
//	float b = 5.5;//101.1
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char* p = "abcdef";//�����ַ������ܱ��޸�
//	*p = 'W';//�ᷢ���δ���
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
//	int(*p1)[5] = &arr1;//����ָ��
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
////��������
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid );
//			break;//��������±�
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
////��������Ϸ
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int mynumber = rand() % 100 + 1;
//	int yournuumber = 0;
//	printf("�������������һ��1-100֮�����������²¸�����\n");
//	printf("��������²�����֣�\n");
//	while (1)
//	{
//		scanf("%d", &yournuumber);
//		if (yournuumber > mynumber)
//			printf("�´���\n");
//		else if (yournuumber < mynumber)
//			printf("��С��\n");
//		else {
//			printf("��ϲ�㣬�¶���");
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
//	while(~scanf("%d", &year)){//�˴�����һ��ΪʲôҪ�������� ^Z ���ܽ������������
//		
//		int ret = leap(year);
//		if (ret == 1)
//			printf("������\n");
//		else
//			printf("��������\n");
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
////��׳�--���������
//int Fact_1(int n)//ʹ�õݹ�
//{
//	if (n > 1) {
//		return n * Fact_1(n - 1);
//	}
//	else {
//		return 1;
//	}
//}
//int Fact_2(n)//��ʹ�õݹ�
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
////ģ��strlen����
//int my_strlen_1(char arr[])//�ݹ�ģ��
//{
//	if (*arr != '\0')
//		return 1 + my_strlen_1(arr + 1);
//	else {
//		return 0;
//	}
//}
//int my_strlen_2(char* arr)//�ǵݹ�ʵ��
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
//			//scanf("%c", &arr[i][j]);����Ͳ������ˣ�ֱ�ӳ�ʼ��
//			arr[i][j] = '$';
//		}
//	}
//	char(*p)[9] = arr;//����һ������ָ���������������arr��Ԫ�أ���һ�У��ĵ�ַ
//	for (i = 0; i < 4; i++) {
//		printf("%s\n", *p++);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//void reverse_string_1(char* string, int n)//ָ��ʵ��
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
//void reverse_string_2(char* str, int n)//�ݹ�ʵ��
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
//int main()//�ַ�������
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
//int main()//����һ������ÿλ֮��
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
//int main()//�ݹ�ʵ��n��k�η�
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
//int LF_1(int n)//�ݹ�ʵ��
//{
//	if (n > 2)
//		return LF_1(n-2) + LF_1(n - 1);
//	else
//		return 1;
//}
//int LF_2(int n)//�ǵݹ�ʵ��
//{
//	int arr[100] = { 1,1 };
//	int i = 0;
//	for (i = 2; i < n; i++) {
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	return arr[n-1];
//}
//int main()//�����n��쳲���������ֵ
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
//void init(int arr[], int sz)//��ʼ������
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)//��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)//����Ԫ�����ú���
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
//void Exchange(char* arr1, char* arr2)//������������һ�����ַ�����
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
//int main()//������������������������������ֵ
//{
//	int a = 3;//011
//	int b = 5;//101
//	// ^ ��λ�����ͬΪ0������Ϊ1
//	printf("%d %d\n", a, b);
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()//����������������λ���ж����ͬλ
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
//int main()//��ȡһ�������Ķ���������λ��ż��λ���ֱ��ӡ
//{
//	int n = 0;//����26 011010
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
//int main()//�ַ�������
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
//int main()//��ӡˮ�ɻ���
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
//int main()//��ӡ����
//{
//	int n = 0;
//	scanf("%d", &n);//�������α߳�
//	//�ϰ벿��
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
//	//�°벿��
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
//int main()//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//{
//	int n = 0;//������
//	int count = 0;//��ƿ��
//	int money = 0;//Ǯ��
//	int num = 0;//���Ŀ�����
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
//int main()//Խ����ʵ�����ѭ����ӡ
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
//int main()//ģ��ʵ�� strlen
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
//int main()//ģ��ʵ�� strcpy
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
//int main()//��������ʹ����ȫ����λ��ż��ǰ�档
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

int main()//��ӡ�������
{
	int arr[30][30] = { 0 };
	int i = 0;
	int n = 0;
	scanf("%d", &n);//��ӡ����
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