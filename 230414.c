#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	/*
	double ff, cc;

	printf("화씨온도 입력: ");
	scanf("%lf", &ff);

	cc = 5.0 / 9 * (ff - 32);
	printf("섭씨온도는 %.2f입니다.", cc);

	반대로 섭씨온도를 입력받아 화씨로 변경하시오. */

	double ff, cc;

	printf("섭씨온도 입력: ");
	scanf("%lf", &cc);

	ff = (9.0 / 5) * cc + 32;
	printf("화씨온도는 %.2f입니다.\n", ff);

	printf("\n");
	int money, price, change;
	printf("물건 값: ");
	scanf("%d", &price);
	printf("받은 현금: ");
	scanf("%d", &money);

	change = money - price;
	printf("거스름돈은 %d원입니다.\n", change);
	printf("-----------------\n");
	printf("오천원 %d장\n", change / 5000);
	printf("천원 %d장\n", (change % 5000) / 1000);
	printf("오백원 %d개\n", (change % 5000 % 1000) / 500); // %해서 나오는 나머지가 5000원 몇 개인지 알 수 있는 거임

	printf("\n");
	int x, y, z;
	printf("세 정수 입력: ");
	scanf("%d %d %d", &x, &y, &z);

	printf("정수 나누기 결과는 %d \n", (x + y) / z);
	printf("실수 나누기 결과는 %f \n", (float)(x + y) / z); // 형 변환 하려면 앞에 (타입) 적어주면 됨

	printf("\n");
	int num1 = 3;

	(num1 % 2 == 0) ? printf("짝수") : printf("홀수");

	//if-else문으로 바꾸기

	printf("\n");
	int num2 = 4;
	if (num2 % 2 == 0)
		printf("짝수");
	else
		printf("홀수");

	printf("\n");
	int ticket;
	printf("숫자 입력: ");
	scanf("%d", &ticket);

	switch (ticket) {
	case 1:
		printf("돌고래 "); //break; 없으면 숫자 1 했을 때 돌고래랑 10종 같이 나옴
	case 2:
		printf("10종 ");
		break;
	default:
		printf("입장권 ");
	}

	return 0;
}