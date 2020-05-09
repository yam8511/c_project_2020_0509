#include <stdio.h>
int main()
{
    int n, error, m, y1, y2, sub;
    scanf("%d", &n);
    while (n--)
    {
        error = 0;
        scanf("%d", &m);
        scanf("%d %d", &y1, &y2);
        sub = y1 - y2;
        m--;
        while (m--)
        {
            scanf("%d %d", &y1, &y2);
            if (sub != y1 - y2)
                error = 1;
        }
        if (error)
            printf("no\n");
        else
            printf("yes\n");
        if (n)
            printf("\n");
    }
    return 0;
}
