#pragma warning(disable:4996)
#include <stdio.h>

int main(void){
	int num = 0;
	
	while (num < 5){
		printf("Hello World!%d\n", num);
		num++;
	}

	printf("--------------------\n");

	int dan = 0, number = 1;
	printf("몇 단? ");
	scanf("%d", &dan);

	while (number < 10){
		printf("%d * %d = %d\n", dan, number, dan * number);
		number++;
	}

	printf("---------------------\n");

	/*양의 정수 하나 입력 받은 다음 그 수만큼 3의 배수를 출력하는 프로그램 작성
	5를 입력 받으면 3 6 9 12 15가 출력될 것*/

	int a = 0, b = 0;
	printf("양의 정수 하나 입력: ");
	scanf("%d", &a);

	while (b < a) {
		b++;				// printf 다음에 이거 넣으면 3*b의 값이 0이 나오기 때문에 0 3 6 9 12 가 출력됨 printf 앞에 넣어야 함
		printf("%d ", 3 * b);
	}

	printf("\n---------------------\n");

	/*사용자로부터 계속 정수 입력을 받아 그 값을 더하기. 사용자가 0을 누르면 입력된 정수의 합을 출력할 것*/
	
	int c = 1, sum = 0;
	while (c != 0) {
		printf("정수를 입력하세요. ");
		scanf("%d", &c);
		sum += c;
	}
	printf("%d\n", sum);	// while문 안에 적으면 반복문 돌아갈 때마다 이 문장 나오게 됨 while문 중괄호 닫고 나서 적기

	printf("--------------------\n");

	/*구구단 단수 입력 받아서 역순으로 출력하기*/

	int dan2, num2 = 9;		// 역순이니까 변수에 넣을 수를 마지막 수로 지정

	printf("몇 단? ");
	scanf("%d", &dan2);

	while (num2 > 0) {
		printf("%d * %d = %d\n", dan2, num2, dan2 * num2);
		num2--;		// 후위증가로 구구단 출력했으니까 역순은 후위감소하면 됨
	}

	return 0;
}