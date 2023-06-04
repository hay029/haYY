#pragma warning(disable:4996)
#include <stdio.h>

//배열 a의 값을 사용자로부터 받아 배열 b에 거꾸로 출력하기
int main(void) {
	int n, i, j, a[100], b[100];

	printf("정수 몇 개 입력하시겠습니까? ");
	scanf("%d", &n);

	printf("하나씩 입력\n");
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (i = 0, j = 4; i < n; i++, j--) b[j] = a[i]; //거꾸로 출력해야하니까 i는 0부터 j는 4부터 시작!!

	printf("거꾸로 된 배열\n");
	for (i = 0; i < n; i++) printf("%d ", b[i]);

	return 0;
}

/*
// 0~11까지의 행렬 값 중 사용자로부터 값을 입력받아 몇행 몇열에 있는지 알려주는 프로그램 만들기
int main(void) {

	int A[3][4] = { {1,5,6,0}, {3,9,2,4}, {10,7,8,11} };
	int n;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) printf("%3d", A[i][j]);
		printf("\n"); //이거 해줘야 한줄에 4개씩 3줄 됨
	}

	printf("어떤 값을 찾으십니까? (0~11)--> ");
	scanf("%d", &n);

	if (n < 0 || n > 11) {
		printf("0~11 사이의 값을 입력해주세요.");
		return 0; //0~11 이외의 값 넣으면 종료시키기
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if( A[i][j] == n )
				printf("찾으시는 값은 %d행 %d열에 있습니다.\n", i, j; //조건이 A[i][j]가 n이라고 했으니까 i행 j열에 있는 거!
		}
	}
	return 0;
}

// 출력값이 a:130, b=70이 되기 위해 포인터 코딩하기
int main(void) {
	int a = 100, b = 100;
	int* p = &a;
	*p += 30;
	p = &b; //*p로 수정하지 않음!!! 수정할 때는 p 값을 수정함!!!
	*p -= 30;
	printf("a:%d  b:%d\n", a, b);

	return 0;
}

//공백없이 입력 받은 글자를 앞글자 하나씩 없애면서 출력하기
int main(void) {

	char s[5];
	printf("알파벳 4글자 공백 없이 입력: ");
	scanf("%s", s);
	for (int i = 0; i < 4; i++)
		printf("%s\n", &s[i]); //%s는 주소를 가르쳐주면 널 직전까지 출력함

	return 0;
}

//음식 이름 입력 받아서 문자열로 출력하기
int main(void) {

	char food1[100], food2[100], food3[100]; //문자열이니까 char 타입 쓰기
	char* p1 = food1, * p2 = food2, * p3 = food3;
	printf("먹고 싶은 것 3가지 입력: ");
	scanf("%s", p1); scanf("%s", p2); scanf("%s", p3);
	printf("지금 바로 %s %s %s 준비함\n", food1, food2, food3);
	return 0;
}

// 세 수의 자리를 한 칸 씩 옆으로 이동하는 결과가 나오도록 프로그램 만들기
void swap(int* one, int* two, int* three) {
	int temp;

	temp = *three;
	*three = *two;
	*two = *one;
	*one = temp;
}

int main(void) {
	int a, b, c;
	printf("세 정수 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	swap(&a, &b, &c);
	printf("한 칸 씩 자리 이동 결과 ==> %d %d %d\n", a, b, c);
	return 0;
}*/