#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	/*
	char arr[5];
	FILE* fa = fopen("C:\\Users\\82102\\OneDrive\\바탕 화면\\a.txt", "r"); //경로 작성 시 역슬래쉬 두 개해야 함! \\해야지 역슬래쉬 하나로 인정 됨
	FILE* fb = fopen("C:\\Users\\82102\\OneDrive\\바탕 화면\\b.txt", "w"); // r=읽기용 w=쓰기용

	if (fa == NULL || fb == NULL)
	{
		printf("파일 열기 실패\n"); return 0;
	} // fa랑 fb가 아무런 파일하고 연결 되어 있지 않으면 종료 시킴 (if문 안에 문장 두 개니까 중괄호 필수)
	for (int i = 0; i < 5; i++) fscanf(fa, "%c", &arr[i]);
	for (int i = 4; i >= 0; i--) fprintf(fb, "%c", arr[i]); //파일용은 scanf, printf 앞에 f 붙여줌

	fclose(fa); //파일 닫아줌
	fclose(fb);
	printf("처리 완료. b.txt를 열어서 결과를 확인하세요! \n");
	


	//반복문 이용해서 1~100 사이의 수 중 5,7,9 배수는 뺴고 출력하는 프로그램 작성
	FILE* fp = fopen("C:\\Users\\82102\\OneDrive\\바탕 화면\\자율\\Project13\\a.txt", "w");

	if (fp == NULL)
	{
		printf("파일 열기 실패\n"); return 0;
	}

	for (int i = 0; i < 100; i++) {
		if (i % 5 == 0 || i % 7 == 0 || i % 9 == 0)
			continue;
			fprintf(fp, "%d\n", i);
	}

	fclose(fp);
	printf("출력되었습니다. 확인하세요.\n");
*/

	//30개의 실수가 나열된 thirty.txt 파일을 읽어서 최대값 최소값을 구한 후 콘솔 출력하기

	double n, max = -999999, min = 999999;

	FILE *fa = fopen("C:\\Users\\82102\\OneDrive\\바탕 화면\\자율\\Project13\\thirty.txt", "r"); //r 쓸 때 큰따옴표 해주기!! 작은따옴표 아님

	if (fa == NULL) {
		printf("파일 열기 실패\n"); return 0;
	}

	for (int i = 0; i < 30; i++) {
		fscanf(fa, "%lf", &n);
		if (n > max) max = n; //max 초기화할 때 작은 수 넣어둠 n이 그 수보다 크면 max는 n이 됨
		if (n < min) min = n;
	}

	printf("최대값 %g\n", max);
	printf("최소값 %g\n", min);

	fclose(fa);

	return 0;
}