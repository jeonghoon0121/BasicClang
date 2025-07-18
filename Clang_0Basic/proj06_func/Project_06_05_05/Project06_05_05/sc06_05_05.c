/*
	%키워드 중심의 출력 특성 확인하기
	signed int 
	unsigned int 
	-1은 부호있는 정수형의 최대값이다. 

	16bit int 2byte
	32bit int 4byte
	64bit int 4byte


	JeongHoon
	20250714
*/
#include<stdio.h>
void main() 
{	
	int data1 = -1;
	unsigned int data2 = 4294967295;
	printf("%d %u %d %u", data1, data2, data1, data2);

	return 1;


}