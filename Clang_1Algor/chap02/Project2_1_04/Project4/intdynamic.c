/*calloc �Լ�

JeongHoon 250718
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* x;//point����
	x = calloc(1,sizeof(int));// int�� �����Ϳ� �޸� �Ҵ�
	if (x == NULL)
	{
		puts("�޸� �Ҵ� ����");
	}
	else 
	{
		*x = 57;
		printf("*x=%d\n", *x);
		free;// int�� �����Ϳ� �Ҵ��� �޸� ����
	}
	return 0;
}