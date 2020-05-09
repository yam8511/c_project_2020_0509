#include <stdio.h>
int humble[5843];

int min(int a, int b)
{
    return a > b ? b : a;
}

void create()
{
    int num = 0, p2, p3, p5, p7, n;
    humble[1] = p2 = p3 = p5 = p7 = n = 1;
    while (1)
    {
        humble[++n] = min(2 * humble[p2],
                          min(3 * humble[p3],
                              min(5 * humble[p5], 7 * humble[p7])));
        if (humble[n] == 2 * humble[p2])
            p2++;
        if (humble[n] == 3 * humble[p3])
            p3++;
        if (humble[n] == 5 * humble[p5])
            p5++;
        if (humble[n] == 7 * humble[p7])
            p7++;
        if (n == 5842)
            break;
    }
}

void printNumber(int n)
{
    int s = n % 10;
    int h = n % 100;
    printf("The %d", n);
    if (h == 11)
        printf("th");
    else if (h == 12)
        printf("th");
    else if (h == 13)
        printf("th");
    else if (s == 1)
        printf("st");
    else if (s == 2)
        printf("nd");
    else if (s == 3)
        printf("rd");
    else
        printf("th");
    printf(" humble number is %d.\n", humble[n]);
}

int main()
{
    create();
    int n;
    while (scanf("%d", &n) == 1 && n)
    {
        printNumber(n);
    }
    return 0;
}
