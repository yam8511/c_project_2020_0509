#include <stdio.h>
#define SIZE 800
#define LEN 2000
int p[SIZE + 1][LEN + 1] = {0};
char output[SIZE + 1][LEN + 1];
void init()
{
    int i;
    p[0][0] = 1;
    p[1][0] = 0;
    output[0][0] = '1';
    output[0][1] = '\0';
    output[1][0] = '0';
    output[1][1] = '\0';
    int j, k, s, count = 0;
    for (i = 2; i <= SIZE; i++)
    {
        for (j = 0; j <= LEN; j++)
        {
            p[i][j] += (p[i - 1][j] + p[i - 2][j]) * (i - 1);
            p[i][j + 1] += p[i][j] / 10, p[i][j] %= 10;
        }

        for (j = LEN; j >= 0; j--)
            if (p[i][j] > 0)
                break;
        for (k = j, s = 0; k >= 0; k--, s++)
            output[i][s] = p[i][k] + '0';
        output[i][s] = '\0';
    }
}

int main()
{
    int n;
    init();
    while (scanf("%d", &n) == 1 && n != -1)
        printf("%s\n", output[n]);
    return 0;
}
