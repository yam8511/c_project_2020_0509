#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int in1, c = 1, i, n, in2, cn1, re, cost[36];
    char buf[100];
    char *delim = " ";
    char *pch;
    char *pos;

    fgets(buf, sizeof(buf), stdin);
    in1 = atoi(buf);

    while (c <= in1)
    {
        printf("Case %d:\n", c);


        i = 0;
        while (i < 36)
        {
            fgets(buf, sizeof(buf), stdin);
            if ((pos = strchr(buf, '\n')) != NULL)
                *pos = '\0';
            pch = strtok(buf, delim);
            while (pch != NULL)
            {
                cost[i] = atoi(pch);
                pch = strtok(NULL, delim);
                i++;
            }

        }

        fgets(buf, sizeof(buf), stdin);
        n = atoi(buf);

        while (n--)
        {
            fgets(buf, sizeof(buf), stdin);
            in2 = atoi(buf);


            int min = 0, de[37] = {0};

            for (i = 2; i <= 36; i++)
            {
                cn1 = in2;
                int sum = 0;

                while (cn1 > 0)
                {
                    re = cn1 % i;
                    sum = sum + cost[re];
                    cn1 = cn1 / i;
                }

                if (min == 0 || sum <= min)
                {
                    de[i] = sum;
                    min = sum;
                }
            }

            printf("Cheapest base(s) for number %d:", in2);


            for (i = 2; i <= 36; i++)
            {
                if (de[i] == min)
                {
                    printf(" %d", i);

                }
            }
            printf("\n");

        }

        if (c < in1)
        {
            printf("\n");

        }
        c++;
    }
    return 0;
}