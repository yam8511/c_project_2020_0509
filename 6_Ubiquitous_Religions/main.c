#include <stdio.h>
#include <string.h>
int n, m;

int getInt()
{
    char ch;
    int n = 0;
    while (ch = getchar())
        if (ch != ' ' && ch != '\n')
            break;
    n = ch - 48;
    while (ch = getchar())
    {
        if (ch == ' ' || ch == '\n')
            break;
        n = n * 10 + ch - 48;
    }
    return n;
}

int main()
{
    int religionID, count, caseNum;
    int i, j, tmp, replace;

    while ((n = getInt()) && (m = getInt()))
    {
        int student[n + 1];
        religionID = 1, count = 0;
        memset(student, 0, sizeof(student));
        while (m--)
        {
            i = getInt(), j = getInt();
            if (student[i] == 0 && student[j] == 0)
            {
                student[i] = religionID, student[j] = religionID;
                religionID++;
                count++;
            }
            else if ((student[i] != 0 && student[j] == 0) ||
                     (student[i] == 0 && student[j] != 0))
            {
                tmp = student[i] < student[j] ? student[j] : student[i];
                student[i] = tmp, student[j] = tmp;
            }
            else if (student[i] != student[j])
            {
                tmp = student[j];
                replace = student[i];
                for (int s = 1; s <= n; s++)
                    if (student[s] == tmp)
                        student[s] = replace;
                count--;
            }
        }
        /* for (i = 1; i <= n; i ++)
        printf("%d ", student[i]);
    printf("\n"); */
        for (i = 1; i <= n; i++)
            if (student[i] == 0)
                count++;
        printf("Case %d: %d\n", ++caseNum, count);
    }
    return 0;
}
