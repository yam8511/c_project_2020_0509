#include <stdio.h>
#define SIZE 101

int print[SIZE];
int GCD[SIZE][SIZE];
int S, t;

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}

void search(int index, int n, int sum)
{
    int i, j;
    if (index == t && sum == S)
    {
        printf("%d", print[0]);
        for (i = 1; i < index; i++)
            printf(" %d", print[i]);
        printf("\n");
        return;
    }
    if (sum >= S)
        return;
    for (; n <= S - sum; n++)
    {
        for (j = 0; j < index; j++)
            if (GCD[print[j]][n] != 1)
                break;

        if (j == index && S - sum >= n)
        {
            print[index] = n;
            search(index + 1, n, sum + n);
        }
    }
}

int main()
{
    for (int a = 1; a < SIZE; a++)
        for (int b = 1; b < SIZE; b++)
            GCD[a][b] = gcd(a, b);

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &S, &t);
        printf("Case %d:\n", i);
        search(0, 1, 0);
    }

    return 0;
}
