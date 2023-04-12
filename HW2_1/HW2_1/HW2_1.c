#include <stdio.h>

void convert(int num1, int num2) { //정수형 파라미터 num1과 num2를 받는 함수 convert, num1은 변환할 수를 10진법으로, num2는 변환할 진법을 2부터 16까지 받는다. 
	char numbers[] = "0123456789ABCDEF"; //진법 변환 결과를 가져오기 위한 문자열. A=10, B=11, C=12, D=13, E=14, F=15

	if (num1 == 0) {
		return;  // 함수 종료 시점
	}

	else {
		convert(num1 / num2, num2); // num1를 num2로 나눈 몫부분에 대해 convert함수 계속해서 실행
		printf("%c", numbers[num1 % num2]); //num1를 num2로 나눈 나머지에 해당하는 문자를 index를 활용하여 numbers 문자열에서 가져온다. 
	}
	//num1를 num2로 나눈 몫이 0이 될 때까지 계속해서 나눈다. 몫이 0이 되었을때, 각 나눗셈의 나머지에 해당하는 문자를 반대 순서로 출력해나간다.
}

int main(void) {
	int num1, num2;

	printf("변환할 10진수 입력 : "); 
	scanf_s("%d", &num1); //scanf_s 함수로 변환할 숫자를 입력받는다.

	printf("변환할 진법 입력 (2~16) : ");
	scanf_s("%d", &num2); //scanf_s 함수로 변환할 진법을 입력받는다.

	if (num2 < 2 || num2 > 16) {
		printf("입력 오류! 2에서 16진법으로만 변환 가능합니다."); // 2에서 16진법으로의 변환만 가능하도록 예외 처리
	}

	else {
		convert(num1, num2);
	}

}