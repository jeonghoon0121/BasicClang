/*
* code 내용
* 모든 요소가 int형인 배열 a
* 각각의 요소는 단일로 선언한 int형 변수와 성질이 같음
* 그러므로 각 요소에 자유롭게 int형의 값을 대입하거나 제거가능
* 
* 자료형이 int형이고 요소가 5개인 배열의 모든요소에 값을 입력한 다음 출력
* Created by JeongHoon 20250718
* 참고서적 :  자료구조와 함께 배우는 알고리즘 입문 C언어편, Bohyoh Shibate
*/

#define _CRT_SECURE_NO_WARNINGS
#define N 5 /*배열 요소 개수*/
#include <stdio.h>
int main(void)
{
	int i;
	int a[N];	/*배열 선언*/
	for (i = 0; i < N; i++)
	{/*각 요소에 값을 입력합니다.*/
		printf("a[%d]:", i);
		scanf("%d", &a[i]);
	}
	puts("각 요소의 값");
	for (i=0;i<N;i++)
	{
		for (i = 0; i < N; i++)
		{
			printf("a[%d]=%d\n", i, a[i]);
		}
	}
	return 0;
}