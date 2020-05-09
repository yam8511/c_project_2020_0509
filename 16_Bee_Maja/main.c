#include <stdio.h>
#define SIZE 100000

struct point
{
    int x, y;
};
struct point p[SIZE + 1];
int idx;
void create()
{
    p[1].x = 0, p[1].y = 0;
    idx = 2;
    int nowI = 0, nowJ = 0, count, num;
    for (num = 1; idx <= SIZE; num++)
    {
        for (count = 0; count < num && idx <= SIZE; count++, idx++)
            p[idx].x = nowI, p[idx].y = ++nowJ;
        for (count = 0; count < num - 1 && idx <= SIZE; count++, idx++)
            p[idx].x = --nowI, p[idx].y = ++nowJ;
        for (count = 0; count < num && idx <= SIZE; count++, idx++)
            p[idx].x = --nowI, p[idx].y = nowJ;
        for (count = 0; count < num && idx <= SIZE; count++, idx++)
            p[idx].x = nowI, p[idx].y = --nowJ;
        for (count = 0; count < num && idx <= SIZE; count++, idx++)
            p[idx].x = ++nowI, p[idx].y = --nowJ;
        for (count = 0; count < num && idx <= SIZE; count++, idx++)
            p[idx].x = ++nowI, p[idx].y = nowJ;
    }
}

int main()
{
    create();
    int n;

    while (scanf("%d", &n) == 1)
        printf("%d %d\n", p[n].x, p[n].y);

    return 0;
}
