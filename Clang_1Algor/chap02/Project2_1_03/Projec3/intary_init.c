/*�迭�� ��� ������ ����� �� ���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	i = 0;
	int a[5] = { 1,2,3,4,5 };
	int na = sizeof(a) / sizeof(a[0]);	/*����� ����*/
	printf("�迭a�� ��Ұ����� %d�Դϴ�.\n", na);

	for (i = 0; i < na; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);


	}
	return 0;

}