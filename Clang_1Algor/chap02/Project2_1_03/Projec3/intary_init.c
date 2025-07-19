/*배열의 요소 개수와 요소의 값 출력*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	i = 0;
	int a[5] = { 1,2,3,4,5 };
	int na = sizeof(a) / sizeof(a[0]);	/*요소의 개수*/
	printf("배열a의 요소개수는 %d입니다.\n", na);

	for (i = 0; i < na; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);


	}
	return 0;

}