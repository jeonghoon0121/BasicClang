/*�迭�� ��Ұ��� �ʱ�ȭ�ϸ� �迭����
* �迭�� ��ҿ� ���� ���� �̸� �˰������� �����Ҷ� �ʱ�ȭ(initializer �Ҽ� �ִ�.
* 1.�ڵ� ���� 20250718
*
*
*/
/*�ڷ����� int���̰� ��Ұ��� 5���� �迭*/
//JeongHoon 250718
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 1,2,3,4,5};
	int na = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < na; i++)
		printf("a[%d]=%d\n", i, a[i]);
	return 0;

}