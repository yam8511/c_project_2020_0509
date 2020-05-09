#include <stdio.h>
#define SIZE 10001

int money[SIZE], record[SIZE];

int getInt()
{
    char ch;
    int n = 0, isNegative = 0;
    while (ch = getchar())
        if (ch != ' ' && ch != '\n')
            break;
    if (ch == '-')
        isNegative = 1;
    else
        n = ch - 48;
    while (ch = getchar())
    {
        if (ch == ' ' || ch == '\n')
            break;
        n = n * 10 + ch - 48;
    }
    if (isNegative)
        return -n;
    return n;
}

int main()
{
    int n;
    while (n = getInt())
    {
        for (int i = 0; i < n; i++)
            money[i] = 0, record[i] = 0;
        int max = 0;
        money[0] = getInt();
        if (money[0] <= 0)
            record[0] = 0;
        else
            record[0] = money[0], max = money[0];
        for (int i = 1; i < n; i++)
        {
            money[i] = getInt();
            record[i] = money[i] < money[i] + record[i - 1] ? money[i] + record[i - 1] : money[i];
            if (record[i] > max)
                max = record[i];
        }
        if (max == 0)
            puts("Losing streak.");
        else
            printf("The maximum winning streak is %d.\n", max);
    }

    return 0;
}
