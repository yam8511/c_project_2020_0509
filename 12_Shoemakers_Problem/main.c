#include <stdio.h>
#include <stdlib.h>

struct work
{
    int s, t, v;
};

int cmp(const void *i, const void *j)
{
    struct work *a, *b;
    a = (struct work *)i, b = (struct work *)j;
    if (a->t * b->s != b->t * a->s)
        return a->t * b->s - b->t * a->s;
    return a->v - b->v;
}

int main()
{
    int t, i, n;
    struct work D[1001];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &D[i].t, &D[i].s);
            D[i].v = i + 1;
        }
        qsort(D, n, sizeof(struct work), cmp);
        for (i = 0; i < n; i++)
        {
            if (i)
                putchar(' ');
            printf("%d", D[i].v);
        }
        puts("");
        if (t)
            puts("");
    }
    return 0;
}
