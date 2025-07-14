/*
	정수 값을 여러 가지 진법으로 출력하기

	%o 8진수
	%d 10진수
	%x 16진수

	10 10진수 10
	010 8진수 010 8
	0x10 16진수 0x10 16

	JeongHoon
	20250714
*/
#include<stdio.h>
void main()
{
	int data1 = 10;
	int data2 = 010; //8, 8진수 010
	int data3 = 0x10; //16 16진수 0x10

	printf("%x, %d, %o", data1, data2, data3);
	/*
		10을  16진수로 -> a
		8을 10진수로 -> 8
		16을 8진수로 -> 20
	
	*/
	return (1);
}