/*�迭�� ��Ұ��� �ʱ�ȭ�ϸ� �迭����
* �迭�� ��ҿ� ���� ���� �̸� �˰������� �����Ҷ� �ʱ�ȭ(initializer �Ҽ� �ִ�. 
* 1.�ڵ� ���� 20250718
* 
* 
*/
/*�ڷ����� int���̰� ��Ұ��� 5���� �迭*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5 /*�迭�� ��Ұ���*/
int main(void)
{
	int i;
	int a[N];	//�迭����
	for (i = 0; i < N; i++)/*�� ��ҿ� �� �Է�*/
	{
		print("a[%d]", i);
		scanf("%d:,&a[i]");
	}
	puts("�� ����� ��");
	for (i = 0; i < N; i++)/**/
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	return 0;
}

