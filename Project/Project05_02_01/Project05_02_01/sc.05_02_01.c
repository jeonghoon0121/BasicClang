/*
05_02 �Լ�����, �Լ�ȣ��

20250711 JeongHoon0121
*/
#include <stdio.h>

/*
�Լ� ����

�Լ��̸� : Sum
�Ű����� : int value1, int value2
�۾����� : int result = value1+value2; return result;
��ȯ�� return result; (int)

*/
int Sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}
/*
�Լ� ȣ��

ȣ���� : caller
��ȣ���� : callee 
*/
void main()
{
	int a = 2, b = 3;
	int value = Sum(2, 3);	//�� ������ Sum �� caller�̰� main�Լ� ���� ���ǵ� callee,��ȣ�����Լ��� ȣ���Ѵ�.
}
/*
�Լ� ȣ�����
1. main�Լ����� Sum�Լ��� ȣ���ϸ� a,b�� value�� Sum�Լ��� ����
2. Sum�Լ��� �Ű�������  main�Լ��� ���޹��� ���� ����
3. input value�� �۾� ���� //2+3
4. main�Լ��� ����� ��ȯ
*/
/*
�Ű�����
���α׷����� ����ϴ� �����ʹ� �ʿ��� ���� �����ϴ� ȿ���� �Լ����� �ʿ��� �� ������ٰ� �Լ��� ������ �����
*/
