#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//////L1-007	念数字
//int main()
//{
//    char n[20] = { 0 };
//    scanf("%s", &n);
//    int sz = strlen(n);
//    for (int i = 0; i < sz; i++) {
//        switch (n[i]) {
//        case '-':printf("fu"); break;
//        case '0':printf("ling"); break;
//        case '1':printf("yi"); break;
//        case '2':printf("er"); break;
//        case '3':printf("san"); break;
//        case '4':printf("si"); break;
//        case '5':printf("wu"); break;
//        case '6':printf("liu"); break;
//        case '7':printf("qi"); break;
//        case '8':printf("ba"); break;
//        case '9':printf("jiu"); break;
//        }
//        if (i < sz - 1) printf(" ");
//    }
//    printf("\n");
//    return 0;
//}
//
////L1-003	个位数统计
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (0 == n) printf("0:1\n");
//    int x = 0, ling = 0, yi = 0, er = 0, san = 0, si = 0, wu = 0, liu = 0, qi = 0, ba = 0, jiu = 0;
//    while (n != 0) {
//        x = n % 10;
//        n /= 10;
//        switch (x) {
//        case 0:ling++; break;
//        case 1:yi++; break;
//        case 2:er++; break;
//        case 3:san++; break;
//        case 4:si++; break;
//        case 5:wu++; break;
//        case 6:liu++; break;
//        case 7:qi++; break;
//        case 8:ba++; break;
//        case 9:jiu++; break;
//        }//该代码部分正确，整型存在数据溢出
//    }
//    if (ling > 0) printf("0:%d\n", ling);
//    if (yi > 0) printf("1:%d\n", yi);
//    if (er > 0) printf("2:%d\n", er);
//    if (san > 0) printf("3:%d\n", san);
//    if (si > 0) printf("4:%d\n", si);
//    if (wu > 0) printf("5:%d\n", wu);
//    if (liu > 0) printf("6:%d\n", liu);
//    if (qi > 0) printf("7:%d\n", qi);
//    if (ba > 0) printf("8:%d\n", ba);
//    if (jiu > 0) printf("9:%d\n", jiu);
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char n[1000] = { 0 };
//    scanf("%s", n);
//    int sz = strlen(n);
//    int x = 0, ling = 0, yi = 0, er = 0, san = 0, si = 0, wu = 0, liu = 0, qi = 0, ba = 0, jiu = 0;
//    for (x = 0; x < sz; x++) {
//        switch (n[x]) {
//        case '0':ling++; break;
//        case '1':yi++; break;
//        case '2':er++; break;
//        case '3':san++; break;
//        case '4':si++; break;
//        case '5':wu++; break;
//        case '6':liu++; break;
//        case '7':qi++; break;
//        case '8':ba++; break;
//        case '9':jiu++; break;
//        default:break;
//        }//使用数组避过了整型数据溢出问题//第一次写未考虑到循环读取
//    }
//    if (ling > 0) printf("0:%d\n", ling);
//    if (yi > 0) printf("1:%d\n", yi);
//    if (er > 0) printf("2:%d\n", er);
//    if (san > 0) printf("3:%d\n", san);
//    if (si > 0) printf("4:%d\n", si);
//    if (wu > 0) printf("5:%d\n", wu);
//    if (liu > 0) printf("6:%d\n", liu);
//    if (qi > 0) printf("7:%d\n", qi);
//    if (ba > 0) printf("8:%d\n", ba);
//    if (jiu > 0) printf("9:%d\n", jiu);
//    return 0;
//}


//#include<stdio.h>
////跟奥巴马一起画方块
//int main()
//{
//    int n;
//    char ch;
//    scanf("%d %c", &n, &ch);
//    int i = 0;
//    for (i = 0; i < (n + 1) / 2; i++) {
//        int j = 0;
//        for (j = 0; j < n; j++) {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
////奇偶分家
//int main()
//{
//    int n = 0, num = 0;
//    scanf("%d\n", &n);
//    int i = 0;
//    int j = 0, o = 0;
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num);
//        if (num % 2 == 0) {
//            o++;
//        }
//        else {
//            j++;
//        }
//    }
//    printf("%d %d", j, o);
//    return 0;
//}


//#include<stdio.h>
////冒泡排序
//int main()
//{
//    int arr[3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++) {
//
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 2; i++) {
//        int j = 0;
//        for (j = 0; j < 2-i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tem = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tem;
//            }
//        }
//    }
//    printf("%d->%d->%d", arr[0], arr[1], arr[2]);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
////L1-017 到底有多二
//int main()
//{
//    char arr[51] = { 0 };
//    scanf("%s", arr);
//    int str = strlen(arr);
//    int count = 0;
//    int i = 0;
//    double num = 0.0;
//    for (i = 0; i < str; i++) {
//        if (arr[i] == '2') {
//            count++;
//        }
//    }
//    if (arr[0] == '-') {
//        str--;
//    }
//    num = (double)count / str;
//    if (arr[0] == '-') {
//        num *= 1.5;
//        if ((arr[str] - '0') % 2 == 0) {
//            num *= 2;
//        }
//    }
//    if (arr[0] != '-' && (arr[str - 1] - '0') % 2 == 0) {
//        num *= 2;
//    }
//    num *= 100;
//    printf("%.2f%%\n", num);
//    return 0;
//}

//#include<stdio.h>
////L1-019 谁先倒
//int main()
//{
//    int a = 0, b = 0;//a表示甲酒量，b表示乙酒量
//    int count_a = 0;//甲喝酒数
//    int count_b = 0;//乙喝酒数
//    int n = 0;
//    scanf("%d%d\n", &a, &b);
//    scanf("%d\n", &n);
//    a++;
//    b++;//超过酒量才算喝醉
//    //题目保证有人喝醉，所以使用while循环更简单而不是for循环
//    while (a && b && n) {
//        int a1 = 0, a2 = 0;//a1表示甲喊的数字，a2表示甲划的数字
//        int b1 = 0, b2 = 0;//b1表示乙喊的数字，b2表示乙划的数字
//        scanf("%d%d%d%d\n", &a1, &a2, &b1, &b2);
//        if (a1 + b1 == a2 && a1 + b1 != b2) {
//            a--;
//            count_a++;
//        }
//        if (a1 + b1 != a2 && a1 + b1 == b2) {
//            b--;
//            count_b++;
//        }
//    }
//    if (a == 0) {
//        printf("A\n");
//        printf("%d\n", count_b);
//    }
//    else {
//        printf("B\n");
//        printf("%d\n", count_a);
//    }
//    return 0;
//}

//#include<stdio.h>
////L1-020 帅到没朋友————未完成
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr1[100000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n + 1; i++) {
//        int arr2[100000] = { 0 };
//        int m = 0;
//        int j = 0;
//        scanf("%d", &m);
//        for (j = 0; j < m; j++) {
//            int id = 0;
//            scanf("%d", &id);
//            if (++arr2[id] < 2) {
//                arr1[id]++;
//            }
//        }
//    }
//    int flag = 0;
//    for (i = 0; i < 100000; i++) {
//        if (arr1[i] == 1) {
//            printf("%d ", i);
//            flag = 1;
//        }
//    }
//    if (flag == 0) {
//        printf("No one is handsome\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[10001] = { 0 };
//    char arr2[10001] = { 0 };
//    gets_s(arr1);
//    gets_s(arr2);
//    int sz1 = strlen(arr1);
//    int sz2 = strlen(arr2);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < sz1; i++) {
//        for (j = 0; j < sz2; j++) {
//            if (arr1[i] == arr2[j]) {
//                arr1[i] = 0;
//            }
//        }
//    }
//    for (i = 0; i < sz1; i++) {
//        if(arr1[i]!=0)
//        printf("%c", arr1[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
////L1-020 帅到没朋友
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100][1000] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++) {
//        int k = 0;
//        scanf("%d", &k);
//        for (j = 0; j < k; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int m = 0;
//    scanf("%d", &m);
//    while (m--) {
//        for (i = 0; i < n; i++) {
//            int id = 0;
//            int flag[]
//            scanf("%d", &id);
//            for (j = 0; j <1000; j++) {
//                if (arr[i][j] == id) {
//
//                }
//            }
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
////L1-002 打印沙漏
//int main(void)
//{
//    int n = 0;
//    char ch = 0;
//    scanf("%d %c", &n, &ch);
//    int i = 0;
//    int sum = 0;
//    while (1) {
//        sum += 2 * (2 * (i+1)- 1);
//        i++;
//        if (sum >= n)
//            break;
//    }
//    sum -= 1;
//    printf("%d %d", i, sum);
//        return 0;
//}

//#include<stdio.h>
////L1-027 出租
//int main()
//{
//    int arr1[11] = { 0 };//存放电话号码
//    int arr2[11] = { 0 };//记录各个数字出现的次数
//    char arr3[11] = { 0 };//以字符形式排序各数字--防止 0 被漏打印
//    int arr4[11] = { 0 };//记录转换后的数据
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 11; i++) {
//        scanf("%1d", &arr1[i]);
//    }
//    for (i = 0; i < 11; i++) {
//        arr2[arr1[i]]++;
//    }
//    for (j = 10, i = 0; j>-1; j--) {
//        if (arr2[j] != 0) {
//            arr3[i++] = j + '0';
//        }
//    }
//    for (i = 0; i < 11; i++) {
//        for (j = 0; j < 11; j++) {
//            if ((arr1[i] == arr3[j] - '0') && arr3[j]) {
//                arr4[i] = j ;
//                break;
//            }
//        }
//    }
//    printf("int[] arr = new int[]{");
//    i = 0;
//    while (arr3[i]) {
//        printf("%c", arr3[i++]);
//        if(arr3[i])
//        printf(",");
//    }
//    printf("};\n");
//    printf("int[] index = new int[]{");
//    for (i = 0; i < 11; i++) {
//        printf("%d", arr4[i]);
//        if (i != 0 || i != 10) {
//            printf(",");
//        }
//    }
//    printf("};\n");
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        int sex = 0;
//        int h = 0;
//        int w = 0;
//        scanf("%d%d%d", &sex, &h, &w);
//        int hi = 130;
//        int we = 27;
//        if (sex == 1) {
//            hi -= 1;
//            we -= 2;
//        }
//        if (h < hi)
//            printf("duo chi yu! ");
//        else if (h == hi)
//            printf("wan mei! ");
//        else
//            printf("ni li hai! ");
//        if (w < we)
//            printf("duo chi rou!\n");
//        else if (w == we)
//            printf("wan mei!\n");
//        else
//            printf("shao chi rou!\n");
//    }
//    return 0;
//}

#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int num = n;
    int flag = 0;
    int i = 0;
    int j = 0;
    char arr0[25][9] = { 0 };
    char arr1[25][9] = { 0 };
    char(*p0)[9] = arr0;
    char(*p1)[9] = arr1;
    for (; n--;) {
        scanf("%d", &flag);
        if (flag == 0) {
            scanf("%s", p0++);
        }
        else {
            scanf("%s", p1++);
        }
    }
    for (i = 0; i < num / 2; i++) {
        printf("%s %s\n", arr0 + i, arr1 + num / 2 - 1 - i);
    }
    return 0;
}