/*max3c.c
���� : 3���� ������ �� ��� �ִ밪�� ���ϴ� ���α׷�
*		�˰����� �������� �����ϰ� �� ���ǵ��� �н��� �������� ����
*			
* ���� : �Էµ� 3���� ������ ��� �ִ밪�� ���ϴ� ���Ϸ��̴�. 
* 1.�ڵ���� 250719 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, c;	//3���� ���� ����
	int max;		//�ִ밪 ����
	/*3���� ������ �Է� ����*/
	printf("3 ������ �ִ� ���� ���մϴ�.\n");
	printf("a�� �� : "); scanf("%d",&a);
	printf("b�� �� : "); scanf("%d",&b);
	printf("c�� �� : "); scanf("%d",&c);
	/*a,b,c�� �ִ밪�� ���Ͽ� max������ ����*/
	max = a;
	if (max < b)max = b;
	if (max < c)max = c;

	printf("�ִ밪�� %d�Դϴ�. \n", max);

	return 0;
}


