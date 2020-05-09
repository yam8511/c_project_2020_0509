#include <stdio.h>
#include <math.h>
int main()
{
    int t, a, b;
    const double pi = acos(-1);
    scanf("%d", &t);
    while (t--)
    {
        if (scanf("%d %d", &a, &b) == 2)
        {
            printf("%.4lf\n", 2 * a * b * pi);
        }
        else if (scanf("%d", &a))
        {
            printf("%.4lf\n", a * a * pi / 8);
        }
    }
    return 0;
}
