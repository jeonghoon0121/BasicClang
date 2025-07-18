#define _CRT_SECURE_NO_WARNINGS
/*
code log
코드 내용
1. 세값의 최대값 구하면서 알고리즘 공부
2. 세 정수 값을 입력하고 최대값을 구하기
20250712코드 작성중
20250718코드 작성중
코드 에러
1. scanf오류 ->  #define _CRT_SECURE_NO_WARNINGS로 없앰
2. printf오류 -> 제대로 타자를 치지 않음 



 도움받은곳 자료구조와 함께 배우는 알고리즘 입문 c언어편
Created by Jeong-Hoon
*/
#include <stdio.h>
int main(void)
{
	int a, b, c;	//변수 선언
	int max;	//최대값 변수
	a = 0; 
	b = 0;
	c = 0;
	max = 0;	//변수 초기화

	printf("세 정수의 최대값을 구합니다. \n");
	printf("a의 값 : ");	scanf("%d", &a);
	printf("b의 값 : ");	scanf("%d", &b);
	printf("c의 값 : ");	scanf("%d", &c);

	/*최대값 변수에 최대값을 넣음*/
	max = a;
	if (b > max)max = b;
	if (c > max)max = c;
	printf("최대값은 %d입니다. \n",max);
}
