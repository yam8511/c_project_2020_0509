#include <stdio.h>
#define SIZE 101

struct player
{
	int win;
	int lose;
};
struct player p[SIZE];

int main()
{
	int n, k;
	int i, j, game, p1, p2;
	char f1[50], f2[50];
	while (scanf("%d %d", &n, &k) == 2)
	{
		for (i = 1; i <= n; i++)
			p[i].win = 0, p[i].lose = 0;
		game = k * n * (n - 1) / 2;
		while (game--)
		{
			scanf("%d %s %d %s", &p1, f1, &p2, f2);
			int kind1, kind2;
			if (f1[0] == 'r')
				kind1 = 1;
			else if (f1[0] == 'p')
				kind1 = 2;
			else
				kind1 = 3;
			if (f2[0] == 'r')
				kind2 = 1;
			else if (f2[0] == 'p')
				kind2 = 2;
			else
				kind2 = 3;
			if (kind1 > kind2)
			{
				j = kind1 - kind2;
				if (j == 1)
					p[p1].win++, p[p2].lose++;
				else
					p[p2].win++, p[p1].lose++;
			}
			else if (kind1 < kind2)
			{
				j = kind2 - kind1;
				if (j == 1)
					p[p2].win++, p[p1].lose++;
				else
					p[p1].win++, p[p2].lose++;
			}
		}
		int total, win;
		for (i = 1; i <= n; i++)
		{
			win = p[i].win;
			total = win + p[i].lose;
			if (total == 0)
				printf("-\n");
			else
				printf("%.3f\n", (float)win / (float)total);
		}
		printf("\n");
	}
	return 0;
}
