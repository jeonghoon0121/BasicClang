/*
	%Ű���� �߽��� ��� Ư�� Ȯ���ϱ�
	signed int 
	unsigned int 
	-1�� ��ȣ�ִ� �������� �ִ밪�̴�. 


	JeongHoon
	20250714
*/
#include<stdio.h>
void main() 
{
	int data1 = -1;

	printf("%d %u", data1, data1);

	printf("sizeof data1 = %zu bytes\n", sizeof data1);  // C99 �̻󿡼� %zu ����
	return 0;


}