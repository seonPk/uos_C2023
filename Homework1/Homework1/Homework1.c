#include <stdio.h>

int main(void) {

	int birth, std_num; // birth는 생년월일을 입력받을 정수형 변수, std_num은 학번을 입력받을 정수형 변수
	char name[50];
	char depart[200]; //name은 이름을 입력받을 문자열 변수, depart는 학과명을 입력받을 문자열 변수. 각 변수에 입력해야할 크기에 따라 적당한 문자열 크기 설정

	printf("이름을 입력하세요. : ");
	scanf_s("%s", &name, sizeof(name)); //scanf_s 함수를 통해 name에 이름 저장. 자료형은 문자열이므로 %s 사용

	printf("생년월일을 입력하세요. (ex. 20230101) : ");
	scanf_s(" %d", &birth); //scanf_s 함수를 통해 birth에 생년월일 저장. 자료형은 정수이므로 %d 사용

	printf("학번을 입력하세요. : ");
	scanf_s(" %d", &std_num); //scanf_s 함수를 통해 std_num에 학번 저장. 자료형은 정수이므로 %d 사용

	printf("학과명을 입력하세요. : ");
	scanf_s(" %s", depart, sizeof(depart)); //scanf_s 함수를 통해 depart에 학과명 저장. 자료형은 문자열이므로 %s 사용

	printf("\n이름 : %s\n생년월일 : %d\n학번 : %d\n학과명 : %s\n", name, birth, std_num, depart);
	// 제시된 포맷으로 입력한 정보를 출력하는 코드, 제일 앞의 \n는 결과 확인의 편의를 위한 줄 띄움
}