#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int k, h, i, first = 0 , second = 1 , count = 0, j, q, first_plus = 0;
	int third = 0, four= 1, count_1 = 0, number = 1, another = 0;
	int number_2 = 1;
	scanf("%d %d", &k, &h);

	if (h % 2 == 0 && k % 2 == 0)//�� �� ¦�� �� ��
	{
		for (j = 1; j <= h; j++)
		{
			if (j % 2 == 0)
			{
				count_1++;
				number = count_1 * 10;
			}
		}
		for (q = 1; q <= k; q++)
		{
			if (q % 2 == 0)
			{
				another++;
				number_2 = another * 10;
			}
		}
		printf("%d", number + number_2);
		return;
	}

	if (k > h)
	{
		if (h % 2 == 1 && k % 2 == 1)// h k �Ѵ� Ȧ �� �� �� 
		{
			for (i = 1; i <= k; i++)
			{
				if (i % 2 == 1)
				{
					first += 1;
				}
			}
			for (q = 1; q <= h; q++)
			{
				if (q % 2 == 1)
				{
					first_plus += 1;
				}
			}
			printf("%d", first + first_plus);
			return;
		}
		if (k % 2 == 1)//k�� Ȧ�� �� ��
		{
			for (i = 1; i <= k; i++) 
			{
				if (i % 2 == 1)
				{
					first += 1;
				}
			}
		}
		else if (k % 2 == 0)//k�� ¦�� �� ��
		{
			for (j = 1; j <= k; j++)
			{
				if (j % 2 == 0)
				{
					count++;
					second = count * 10;
				}
			}
		}
		if (h % 2 == 1)//h�� Ȧ�� �� ��
		{
			for (i = 1; i <= h; i++) 
			{
				if (i % 2 == 1)
				{
					third += 1;
				}
			}
		}
		else if (h % 2 == 0)//h�� ¦�� �� ��
		{
			for (j = 1; j <= h; j++)
			{
				if (j % 2 == 0)
				{
					count_1++;
					four = count_1 * 10;
				}
			}
		}

		if (k % 2 == 0 || h % 2 == 1)
		{
			printf("%d", second + third);
		}
		else if (k % 2 == 1 || h % 2 == 0)
		{
			printf("%d", first + four);
		}
		//printf("%d %d %d %d\n", first, second, third, four);
	}
	else if (h > k)
	{
		if (h % 2 == 1 && k % 2 == 1)// h k �Ѵ� Ȧ �� �� �� 
		{
			for (i = 1; i <= k; i++)
			{
				if (i % 2 == 1)
				{
					first += 1;
				}
			}
			for (q = 1; q <= h ; q++)
			{
				if (q % 2 == 1)
				{
					first_plus += 1;
				}
			}
			printf("%d", first + first_plus);
			return;
		}
		if (k % 2 == 1)//k�� Ȧ�� �� ��
		{
			for (i = 1; i <= k; i++)
			{
				if (i % 2 == 1)
				{
					first += 1;
				}
			}
		}
		else if (k % 2 == 0)//k�� ¦�� �� ��
		{
			for (j = 1; j <= k; j++)
			{
				if (j % 2 == 0)
				{
					count++;
					second = count * 10;
				}
			}
		}
		if (h % 2 == 1)//h�� Ȧ�� �� ��
		{
			for (i = 1; i <= h; i++)
			{
				if (i % 2 == 1)
				{
					third += 1;
				}
			}
		}
		else if (h % 2 == 0)//h�� ¦�� �� ��
		{
			for (j = 1; j <= h; j++)
			{
				if (j % 2 == 0)
				{
					count_1++;
					four = count_1 * 10;
				}
			}
		}

		if (k % 2 == 0 || h % 2 == 1)
		{
			printf("%d", second + third);
		}
		else if (k % 2 == 1 || h % 2 == 0)
		{
			printf("%d", first + four);
		}
		//printf("%d %d %d %d\n", first, second, third, four);
		//printf("%d %d", first, second);
	}

	
}