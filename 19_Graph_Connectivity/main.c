#include <stdio.h>
#include <string.h>

int m;
int W[27][27];
int v[27];
void visit(int n)
{
    v[n] = 1;
    int i, j;
    for (i = 0; i <= m; i++)
        if (v[i] == 0 && W[n][i] == 1)
            visit(i);
}

int main()
{
    int n, i, j;
    char ch[3];
    scanf("%d", &n);
    for (j = 0; j < n; j++)
    {
        int count = 0, isCase = 0;
        memset(v, 0, sizeof(v));
        memset(W, 0, sizeof(W));
        while (gets(ch))
        {
            int len = strlen(ch);
            if (len == 0)
            {
                if (isCase)
                {
                    for (i = 0; i <= m; i++)
                    {
                        if (v[i] == 0)
                            visit(i), count++;
                    }
                    if (j != 0)
                        printf("\n");
                    printf("%d\n", count);
                    isCase = 0;
                    break;
                }
            }
            if (len == 1)
                isCase = 1, m = ch[0] - 'A';
            if (len > 1)
            {
                int node1 = ch[0] - 'A';
                int node2 = ch[1] - 'A';
                W[node1][node2] = W[node2][node1] = 1;
            }
        }
        if (isCase)
        {
            for (i = 0; i <= m; i++)
            {
                if (v[i] == 0)
                    visit(i), count++;
            }
            if (j != 0)
                printf("\n");
            printf("%d\n", count);
            isCase = 0;
        }
    }
    return 0;
}
