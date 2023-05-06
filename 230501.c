#pragma warning(disable:4996)
#include <stdio.h>
/*
int Add(int num1, int num2) {  //인자전달도 되고 반환값도 있음
	return num1 + num2;
}

void ShowAddResult(int num) {  //인자전달은 있지만 반환값은 없음(반환 할 거 없으면 void 쓰면 됨)
	printf("덧셈결과 출력: %d\n", num);
}

int ReadNum(void) {  //전달할 인자는 없고 반환값이 있음(return 써야함)
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) {  //전달 인자도 없고 반환값도 없음 그냥 안내멘트 적었음
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
	printf("두 개의 정수를 입력하세요. \n");
}

int main(void) {
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);

	//실행 순서는 main함수부터임 위에 있는 나머지 함수들은 main에서 호출해야 순서가 돌아오게 됨

	printf("\n");
	//세 개의 정수를 인자로 전달받아 그 중 가장 큰 수를 반환하는 함수와 가장 작은 수를 반환하는 함수 만들기
	*/

int Big(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1; // 반환값 있는 거임
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3; 
}

int Small(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else
		return num3;
}

int main(void) {
	int num1, num2, num3;
	printf("세 개의 정수를 입력하세요. ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("가장 큰 수는 %d\n", Big(num1, num2, num3));
	printf("가장 작은 수는 %d\n", Small(num1, num2, num3));  // 로딩 순서는 main함수부터! main에서 함수 호출 해야 다른 함수 출력 가능함

	/*Big, Small 부분 비교 연산 말고 삼항 연산자도 넣을 수 있음

	ex) Big 부분에는
		if(num1>num2)
			return (num1>num3) ? num1 : num3;
		else
			return (num2>num3) ? num2 : num3;

		Small 부분에는
		if(num1<num2)
			return (num1>num3) ? num1 : num3;
		else
			return (num2<num3) ? num2 : num3;
	*/

	/*main 함수를 먼저 작성하고 싶으면 int Big(int num1, int num2, int num3); 를 먼저 쓰고 main함수 작성하고 다시 Big함수 안의 내용 작성하기*/
	return 0;
}