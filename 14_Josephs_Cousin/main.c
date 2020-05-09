#include <stdio.h>
#define SIZE 33000
int prime[SIZE + 1];
int prime_table[SIZE], prime_table_len = 0;

void makeprime()
{
    int i, j;
    prime_table[prime_table_len++] = 2;
    for (i = 3; i < SIZE; i += 2)
        if (!prime[i])
        {
            for (j = i + i; j <= SIZE; j += i)
                prime[j] = 1;
            prime_table[prime_table_len++] = i;
        }
}

int nextLife(int isLife[], int site, int n)
{
    while (!isLife[site])
    {
        site++;
        if (site >= n)
            site -= n;
    }
    return site;
}

int main()
{
    makeprime();
    int n, i, j, life;
    while (scanf("%d", &n) == 1 && n)
    {
        int isLife[n], nowSite = 0, count;
        for (i = 0; i < n; i++) /* 初始化 */
            isLife[i] = 1;
        for (i = 0; i < n - 1; i++)
        {
            count = prime_table[i] - 1;

            for (j = 0; j < count; j++)
            {
                nowSite = nextLife(isLife, nowSite, n);
                nowSite++;
                if (nowSite >= n)
                    nowSite -= n;
            }
            nowSite = nextLife(isLife, nowSite, n);
            isLife[nowSite] = 0;
        }
        for (i = 0; i < n; i++)
            if (isLife[i])
            {
                printf("%d\n", i + 1);
                break;
            }
    }
    return 0;
}
