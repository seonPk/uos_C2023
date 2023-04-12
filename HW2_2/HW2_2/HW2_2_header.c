#include <stdio.h>
#include <stdbool.h> //True / False 값을 가지는 Boolean 자료형을 return하기 위한 헤더

int LCM(int a, int b) { //Least Common Multiple, 최소공배수, 정수 a, b를 parameter로 입력받는 함수
	int lcm;

	for (int i = 1; i <= b; i++) {
		if ((a * i) % b == 0) {
			lcm = a * i;
			break; //i에 1씩 더해가며 a*i의 값을 확인한다. i는 최대 b까지 커지며, 이 과정에서 처음으로 b로 나누어 떨어지는 a*i가 있다면 그 수가 최소공배수
		}
		else continue; //a*i의 값이 b로 나누어 떨어지면 lcm에 해당 값을 저장하고 for구문 종료, 나누어 떨어지지 않을 경우 계속해서 for구문 진행
	}

	printf("Least Common Multiple of %d and %d is %d.", a, b, lcm);
	return lcm;
}

int LCM_scan(void) { //Least Common Multiple, 최소공배수, scanf_s로 정수를 입력받는 함수
	int a, b, lcm;

	printf("Enter number 1 : ");
	scanf_s("%d", &a);

	printf("Enter number 2 : ");
	scanf_s("%d", &b);

	for (int i = 1; i <= b; i++) {
		if ((a * i) % b == 0) {
			lcm = a * i;
			break;
		}
		else continue;
	}

	printf("Least Common Multiple of %d and %d is %d.", a, b, lcm);
	return lcm;
}

int GCD(int a, int b) { //Greatest Common Devisor, 최대공약수, 정수 a, b를 parameter로 입력받는 함수
	int lcm, gcd;

	for (int i = 1; i <= b; i++) {
		if ((a * i) % b == 0) {
			lcm = a * i;
			break;
		}
		else continue; //최소공배수를 구하는 코드와 동일
	}

	gcd = a * b / lcm; // 두 수의 곱은 두 수의 최대공약수와 최소공배수의 곱과 같다는 수학적 성질 이용

	printf("Greatest Common Devisor of %d and %d is %d.", a, b, gcd);
	return gcd;
}

int GCD_scan(void) { //Greatest Common Devisor, 최대공약수, scanf_s로 정수 a, b를 입력받는 함수
	int a, b, lcm, gcd;

	printf("Enter number 1 : ");
	scanf_s("%d", &a);

	printf("Enter number 2 : ");
	scanf_s("%d", &b);

	for (int i = 1; i <= b; i++) {
		if ((a * i) % b == 0) {
			lcm = a * i;
			break;
		}
		else continue;
	}

	gcd = a * b / lcm; // 두 수의 곱은 두 수의 최대공약수와 최소공배수의 곱과 같다는 수학적 성질 이용

	printf("Greatest Common Devisor of %d and %d is %d.", a, b, gcd);
	return gcd;
}

_Bool Prime(int a) { //Prime Number, 소수 판별 함수, 정수 a를 parameter로 입력받는 함수, True / False를 반환해야 하므로 _Bool 자료형
	int num;
	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			num = i;
			break;
		}
	} // 소수는 1과 자기자신만을 약수로 가지는 수이다. i를 2에서부터 1씩 더해가며 a를 나눠볼 때, 처음 나누어 떨어지는 수를 정수자료형 변수 num에 저장한다.

	//num이 a와 같으면 1과 a외에 약수가 존재하지 않는다는 의미. 따라서 소수이다. num과 a가 다른 수이면 a는 소수가 아니다.
	if (num == a) {
		printf("%d is a prime number!", a);
		return true;
	}
	else {
		printf("%d is not a prime number!", a);
		return false;
	}
}

_Bool Prime_scan(void) { //Prime Number, 소수 판별 함수, scanf_s로 정수 a를 입력받는 함수, True / False를 반환해야 하므로 _Bool 자료형
	int a, num;

	printf("Enter a number to determine if it is a prime number : ");
	scanf_s("%d", &a);

	for (int i = 2; i <= a; i++) {
		if (a % i == 0) {
			num = i;
			break;
		}
	}

	if (num == a) {
		printf("%d is a prime number!", a);
		return true;
	}
	else {
		printf("%d is not a prime number!", a);
		return false;
	}
}
