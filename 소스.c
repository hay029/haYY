#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("번호 선택? ");
	scanf("%d", &opt);

	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2; // 이렇게 적으면 if 적힌 거 전부 연산하게 됨 => 비효율적

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2; // 이러면 조건 만족되면 else 이후는 건너뜀

	printf("결과: %lf\n\n", result);



	/*
	ex) 두 개의 정수를 입력받아 두 수의 차를 출력하기 (단, 무조건 큰 수에서 작은 수를 뺀 결과를 출력할 것)
	*/

	int a, b, c;

	printf("두 개의 정수를 입력하세요. ");
	scanf("%d %d", &a, &b);

	if (a < b)
		c = b - a;
	else
		c = a - b;

	printf("뺄셈 결과: %d\n\n", c);


	/*
	ex2) 학생의 전체 평균점수에 대한 학점 출력하기
	90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C, 60점 이상이면 D, 그 미만이면 F로 출력
	국어, 영어, 수학 점수를 입력 받고 평균 구한 후 학점 출력할 것
	*/

	double k, e, m, avr; // 순서대로 국어 점수, 영어 점수, 수학 점수, 평균

	printf("국어, 영어, 수학 점수를 차례로 입력하세요. ");
	scanf("%lf %lf %lf", &k, &e, &m);

	avr = (k + e + m) / 3.0;
	printf("평균 점수는 %g입니다.\n", avr);

	if (avr >= 90.0)
		printf("학점은 A입니다.\n");
	else if (avr >= 80.0)
		printf("학점은 B입니다.\n");
	else if (avr >= 70.0)
		printf("학점은 C입니다.\n");
	else if (avr >= 60.0)
		printf("학점은 D입니다.\n");
	else
		printf("학점은 F입니다.\n\n");

	return 0;
}