#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

int main()
{
	char box[101][101];
	char box1[101][101];
	int i, j,k,e;
	int n;

	int score = 0, number = 0;
	
	scanf("%d", &n);

	for (i = 0; i <= n ; i++)
	{
		for (j = 0; j < n ; j++)
		{
			scanf("%c", &box[i][j]);
		}

	}
    /*
	for ( i = 0; i <= n; i++)
	{
		for ( j = 0; j <= n; j++)
		{
			scanf("%c", &box[i][j]);
		}
		
	}
	*/
	/*
	//������ �� �밢��
	box[i + 1][j + 1]
		//���� �� �밢��
		box[i + 1][j - 1]
		//������ �� �밢��
		box[i - 1][j + 1]
		//���� �� �밢�� 
		box[i - 1][j - 1]
		//��
		box[i - 1][j]

		//�Ʒ�
		box[i + 1][j]

		//������
		box[i][j + 1]

		//����
		box[i][j - 1]
	*/
	for ( i = 0; i <= n ; i++)
	{
		score = 0;
		for ( j = 0; j < n ; j++)
		{
			if (!(box[i][j] >= '1' && box[i][j] <= '9'))
			{
				if (box[i + 1][j + 1] >= '1' && box[i+ 1][j + 1] <= '9')//������ �� �밢��
				{
					number = (int) box[i + 1][j + 1]; 
					score += number;
				}
				else if (box[i - 1][j + 1] >= '1' && box[i - 1][j + 1] <= '9')//������ �� �밢��
				{
					number = (int)box[i - 1][j + 1];
					score += number;
				}
				else if (box[i + 1][j - 1] >= '1' && box[i + 1][j - 1] <= '9')//���� �� �밢��
				{
					number = (int)box[i + 1][j - 1];
					score += number;
				}
				else if (box[i - 1][j - 1] >= '1' && box[i - 1][j - 1] <= '9')//���� �� �밢��
				{
					number = (int)box[i - 1][j - 1];
					score += number;
				}
				else if (box[i - 1][j] >= '1' && box[i - 1][j] <= '9') // �� 
				{
					number = (int)box[i - 1][j];
					score += number;
				}
				else if (box[i + 1][j] >= '1' && box[i + 1][j] <= '9')//�Ʒ�
				{
					number = (int)box[i + 1][j];
					score += number;
				}
				else if (box[i ][j + 1] >= '1' && box[i][j + 1] <= '9')//������
				{
					number = (int)box[i][j + 1];
					score += number;
				}
				else if (box[i][j - 1] >= '1' && box[i][j - 1] <= '9')//����
				{
					number = (int)box[i][j - 1];
					score += number;
				}
				if (score >= 10)
				{
					box1[i][j] = 'M';
				}
				else
				{
					box1[i][j] = (char)score;
				}
				
			}
			
			if (box1[i][j] >= '1' && box1[i][j] <= '9')
			{
				box1[i][j] = '*';
			}
			
		}
	}
	
	for ( k = 0; k <= n; k++)
	{
		for (e = 0; e < n ; e++)
		{
			printf("%c", box1[k][e]);
		}
		//printf("\n");
	}
	
	
}