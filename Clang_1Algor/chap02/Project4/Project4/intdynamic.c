/*calloc 함수

JeongHoon 250718
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* x;//point변수
	x = calloc(1,sizeof(int));// int형 포인터에 메모리 할당
	if (x == NULL)
	{
		puts("메모리 할당 실패");
	}
	else 
	{
		*x = 57;
		printf("*x=%d\n", *x);
		free;// int형 포인터에 할당한 메모리 해제
	}
	return 0;
}