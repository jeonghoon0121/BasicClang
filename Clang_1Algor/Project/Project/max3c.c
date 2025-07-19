/*max3c.c
목적 : 3개의 정수의 값 가운데 최대값을 구하는 프로그램
*		알고리즘이 무엇인지 이해하고 그 정의등을 학습의 목적으로 만듬
*			
* 내용 : 입력된 3개의 정수값 가운데 최대값을 구하는 프록램이다. 
* 1.코드수정 250719 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, c;	//3개의 정수 선언
	int max;		//최대값 선언
	/*3개의 정수를 입력 받음*/
	printf("3 정수의 최대 값을 구합니다.\n");
	printf("a의 값 : "); scanf("%d",&a);
	printf("b의 값 : "); scanf("%d",&b);
	printf("c의 값 : "); scanf("%d",&c);
	/*a,b,c의 최대값을 구하여 max변수에 대입*/
	max = a;
	if (max < b)max = b;
	if (max < c)max = c;

	printf("최대값은 %d입니다. \n", max);

	return 0;
}


