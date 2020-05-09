#include <stdio.h>
int check(long long int n)
{
    int repeat[10] = {0};
    for (; n; n /= 10)
    {
        int tmp = n % 10;
        if (repeat[tmp])
            return 0;
        repeat[tmp] = 1;
    }
    return 1;
}

int main()
{
    int caseNum;
    long long int s1, s2, limit, n;
    scanf("%d", &caseNum);

    for (int i = 0; i < caseNum; i++)
    {
        scanf("%lld", &n);
        limit = 180000;
        if (i != 0)
            printf("\n");
        for (s2 = 1, s1 = n; s2 < limit; s1 += n, s2++)
        {
            if (check(s1) && check(s2))
                printf("%lld / %lld = %lld\n", s1, s2, n);
        }
    }

    return 0;
}
