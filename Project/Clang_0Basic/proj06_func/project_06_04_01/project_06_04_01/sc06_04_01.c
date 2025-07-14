/*
단일문자출력함수
putchar()


20250714
JeongHoon
*/
#include<stdio.h>

void main()
{
	putchar('H');
	putchar('i');
	putchar('~');
	putchar('H');
	putchar('i');
	putchar('~');

	//개행되지 않음
	putc('H', stdout);
	putc('i', stdout);
	putc('~', stdout);
	putc('H', stdout);
	putc('i', stdout);
	putc('~', stdout);
	//putchar()함수는 putc(,)함수이다. 

}