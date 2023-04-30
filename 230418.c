#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> //rand() 사용 시 필수
#include <time.h> //srand((unsigned)time(NULL) 사용 시 필수


int main(void) {
	int com, user, point = 30;
	srand((unsigned)time(NULL)); //rand() 사용 전에 한번 사용, 무작위 수 만들어줌, rand()는 결과 순서 정해져 있음 
	com = rand() % 2; //0, 1 중에 나옴

	printf("홀(1), 짝(0) 선택: ");
	scanf("%d", &user);

	if (com == user) {
		point += 30;
		printf("맞췄음! 포익트는 %d점 \n", point);
	}
	else {
		point -= 30;
		printf("틀렸음! 포인트는 %d점 \n", point);
	}

	printf("\n");
	char rain;

	printf("비가 오나요? yes면 Y,y, no면 다른 문자: ");
	scanf("%c", &rain); //문자형 변수 썼으니까 %c 해줘야함

	if (rain == 'y' || rain == 'Y')
		printf("우산 준비\n"); // 한줄 작성 시 중괄호 생략 가능 두줄 이상이면 무조건 중괄호하기!!
	printf("소개팅 간다\n");

	printf("\n");
	int trip;

	srand((unsigned)time(NULL));
	trip = rand() % 4 + 1;

	switch (trip) {
	case 1:
		printf("제주도 \n");
		break; //여기서 break; 없으면 rand함수로 랜덤 숫자 나와도 제주도 사이판 둘다 출력됨
	case 2:
		printf("사이판 \n");
		break;
	default:
		printf("하와이 \n");
	}

	printf("\n");
	int num1, num2, max;

	printf("두 수 입력: ");
	scanf("%d %d", &num1, &num2);

	max = (num1 > num2) ? num1 : num2;
	printf("큰 수는 %d입니다.\n", max);

	printf("num2의 절댓값은 %d \n", (num2 < 0) ? -num2 : num2);

	printf("num1=%d은 ", num1);
	(num1 % 2 == 0) ? printf("짝수") : printf("홀수");

	// if문으로 바꾸면?
	printf("\n");
	int num3, num4, max2;

	printf("두 수 입력: ");
	scanf("%d %d", &num3, &num4);

	if (num3 > num4) max2 = num3;
	if (num4 > num3) max2 = num4;
	printf("큰 수는 %d입니다.\n", max2);

	if (num4 < 0) num4 = -num4;
	printf("num4의 절댓값은 %d\n", num4);

	if (num3 % 2 == 0) printf("짝수\n");
	if (num3 % 2 != 0) printf("홀수\n");


	return 0;
}