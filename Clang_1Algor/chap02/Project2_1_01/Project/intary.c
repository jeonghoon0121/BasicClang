/*
* code ����
* ��� ��Ұ� int���� �迭 a
* ������ ��Ҵ� ���Ϸ� ������ int�� ������ ������ ����
* �׷��Ƿ� �� ��ҿ� �����Ӱ� int���� ���� �����ϰų� ���Ű���
* 
* �ڷ����� int���̰� ��Ұ� 5���� �迭�� ����ҿ� ���� �Է��� ���� ���
* Created by JeongHoon 20250718
* ������ :  �ڷᱸ���� �Բ� ���� �˰��� �Թ� C�����, Bohyoh Shibate
*/

#define _CRT_SECURE_NO_WARNINGS
#define N 5 /*�迭 ��� ����*/
#include <stdio.h>
int main(void)
{
	int i;
	int a[N];	/*�迭 ����*/
	for (i = 0; i < N; i++)
	{/*�� ��ҿ� ���� �Է��մϴ�.*/
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	puts("�� ����� ��");
	for (i=0;i<N;i++)
	{
		for (i = 0; i < N; i++)
		{
			printf("a[%d]=%d\n", i, a[i]);
		}
	}
	return 0;
}