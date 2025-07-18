/*배열의 요소값을 초기화하며 배열선언
* 배열의 요소에 넣을 값을 미리 알고있으면 선언할때 초기화(initializer 할수 있다.
* 1.코드 정리 20250718
*
*
*/
/*자료형이 int형이고 요소개수 5개인 배열*/
//JeongHoon 250718
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 1,2,3,4,5};
	int na = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < na; i++)
		printf("a[%d]=%d\n", i, a[i]);
	return 0;

}