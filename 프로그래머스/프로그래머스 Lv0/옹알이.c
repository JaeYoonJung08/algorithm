#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
// babbling_len�� �迭 babbling�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
void solution(const char* babbling[], int babbling_len) {
	int i, j, q, answer = 0;
	char temp[100] = { "aya", "ye", "woo", "ma" };
	/*
	for(i = 0; i < babbling_len; i++)
	{
		for(j = 0; j < babbling_len; j++)
		{
			for(q = 0; q < babbling_len; q++)
			{
				if (strcmp(babbling[i] , &temp[j][q]) == 0)
				{
				 answer++;
				}
			}
		}
	}
	*/

	for (i = 0; i < babbling_len; i++)
	{
		for (j = 0; j < babbling_len; j++)
		{
			if (strcmp(babbling[i], &temp[j]) == 0)
			{
				babbling = '0';
			}
			//else if () {

			//}

		}
	}

	for ( q = 0; q < babbling_len; q++)
	{
		printf("%s", babbling);
	}
	/*
   for (i = 0; i < babbling_len; i++)
   {
	 temp = babbling[i];
	 if(temp == 'aya'){
		 answer++;
	 }
   } */

	//return answer;


}

int main() {
	char box[100][100]  = { "aya", "yee", "u", "maa", "wyeoo" };
	int i, count;
	
	
	count = strlen(box);
	solution(box, count);


}