/*
05_02 함수정의, 함수호출 , 매개변수

20250711 JeongHoon0121
*/
/*
함수 정의

함수이름 : Sum
매개변수 : int value1, int value2
작업내용 : int result = value1+value2; return result;
반환값 return result; (int)

*/
/*
int Sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}
*/
/*
함수 호출

호출자 : caller
피호출자 : callee 
*/
/*
void main()
{
	int a = 2, b = 3;
	int value = Sum(2, 3);	//이 라인의 Sum 은 caller이고 main함수 위의 정의된 callee,피호출자함수를 호출한다.

}
*/
/*
함수 호출과정
1. main함수에서 Sum함수를 호출하며 a,b의 value를 Sum함수에 전달
2. Sum함수의 매개변수에  main함수의 전달받은 값을 복사
3. input value로 작업 진행 //2+3
4. main함수로 결과값 반환
*/
/*
매개변수
Sum 함수가 main 함수의 변수 a,b를 직접 사용할 수 없어서 매개변수 int value1, int value2를 이용하여 사용
*/
#include <stdio.h>
int Sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}
void main()
{
	int s;
	s = Sum(2, 3);
	printf("Sum함수의 결과는 %d\n", s);
}