#include <stdio.h>
int main(void)
{
    int m, n, N;
    int num = 0;
    scanf_s("%d %d\n", &m, &N);
    while (m <= 100 && N <= 100) {
        scanf_s("%d\n", &n);
        if (n < 0) {
            printf("Game Over\n");
            return 0;
        }
        num++;
        if (n > m) {
            printf("Too big\n");
        }
        if (n < m) {
            printf("Too small\n");
        }if (n==m&&num == 1) {
            printf("Bingo\n");
            return 0;
        }
        if (n==m&&1 < num && num <= 3) {
            printf("Lucky You\n");
            return 0;
            }
        if (n==m&&num > 3 && num <= N) {
            printf("Good Guess!\n");
            return 0;
                }
        if (num > N) {
            printf("Game Over\n");
            return 0;
        }
    }
}