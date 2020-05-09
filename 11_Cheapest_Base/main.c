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
    // cin >> in1; //輸入測資組數
    while (c <= in1)
    {
        printf("Case %d:\n", c);
        // cout << "Case " << c << ":" << endl; //輸出第幾組

        i = 0;
        while (i < 36) //輸入花費
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
            // cin >> cost[i];
        }

        fgets(buf, sizeof(buf), stdin);
        n = atoi(buf);
        // cin >> n; //輸入數字數量
        while (n--)
        {
            fgets(buf, sizeof(buf), stdin);
            in2 = atoi(buf);
            // cin >> in2; //輸入數字

            int min = 0, de[37] = {0}; //歸零

            for (i = 2; i <= 36; i++) //計算每個進位的價錢
            {
                cn1 = in2;   //原本的數字不能動所以用其他變數
                int sum = 0; //歸零

                while (cn1 > 0) //利用短除法將十進位轉成任何進位
                {
                    re = cn1 % i;         //取得餘數就是該進位要轉的數字
                    sum = sum + cost[re]; //計算價錢
                    cn1 = cn1 / i;
                }

                if (min == 0 || sum <= min) //紀錄最少的花費
                {
                    de[i] = sum;
                    min = sum;
                }
            }

            printf("Cheapest base(s) for number %d:", in2);
            // cout << "Cheapest base(s) for number " << in2 << ":"; //輸出

            for (i = 2; i <= 36; i++)
            {
                if (de[i] == min) //輸出花費最少的進位
                {
                    printf(" %d", i);
                    // cout << " " << i;
                }
            }
            printf("\n");
            // cout << endl;
        }

        if (c < in1) //最後一組測資不用換行
        {
            printf("\n");
            // cout << endl;
        }
        c++;
    }
    return 0;
}