/*
	%키워드 중심의 출력 특성 확인하기
	signed int 
	unsigned int 
	-1은 부호있는 정수형의 최대값이다. 


	JeongHoon
	20250714
*/
#include<stdio.h>
void main() 
{
	int data1 = -1;

	printf("%d %u", data1, data1);

	printf("sizeof data1 = %zu bytes\n", sizeof data1);  // C99 이상에서 %zu 권장
	return 0;


}