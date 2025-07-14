/*
	%키워드에 의한 데이터의 크기 변화 확인

	JeongHoon
	20250714

	signed char 변수를 %u로 출력하면 255가 아님
	%d, %u는 어떤 크기가 오든 4byte값으로 변환후 출력함 
*/
#include<stdio.h>
void main()
{
	char data = -1;
	printf("%d %u", data, data);


}