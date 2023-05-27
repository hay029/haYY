#pragma warning(disable:4996)
#include <stdio.h>
/*
int main(void) {
	
	2차원 배열 => int arr[3][3]={ {0,1,2},{3,4,5},{6,7,8} };
				  int arr[3][3]={0,1,2,3,4,5,6,7,8};
	              int arr[][3]={0,1,2,3,4,5,6,7,8};
				  로 초기화 하면 0번 행에 0,1,2, 1번 행에 3,4,5, 2번 행에 6,7,8임
				  배열명 [행][열] 구조인데 행이 적힌 대괄호는 비울 수 있어도 열이 적힌 대괄호는 비우면 안됨
	
	//행렬 더하기 예제
	int A[3][4] = { {2,3,0,4},{8,9,1,7},{7,0,5,0} };
	int B[3][4] = { {1,0,2,0}, {3,0,0,0},{1,5,5,2} };
	int C[3][4];

	for (int r = 0; r < 3; r++)
		for (int c = 0; c < 4; c++)C[r][c] = A[r][c] + B[r][c];

	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) printf("%2d ", C[r][c]);
		printf("\n");
	}

	return 0;
}

//가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여 구구단 2,3,4단 출력
int main(void) {
	int A[3][9];
	int dan, num;

	for (dan = 0; dan < 3; dan++)
		for (num = 0; num < 9; num++)
			A[dan][num] = (dan + 2) * (num + 1); // 단이랑 넘은 0부터 시작이니까 2단에 2*1을 해주려면 단에는 +2, 넘에는 +1이 되어야함

	for(dan=0;dan<3;dan++) {
		for (num = 0; num < 9; num++) printf("%2d ", A[dan][num]);
		printf("\n");
		} // 단 반복하는 for문에 중괄호 하고 넘 반복시키면서 출력, 한 단 끝날 때마다 줄바꿈하는 거임

	return 0;
}
*/
//프로그램으로부터 세 사람의 세 과목 점수를 입력 받아 배열에 저장한 후 개인별 총점을 출력
int main(void) {
	int A[3][4];
	int i, j, sum = 0;

	for (i = 0; i < 3; i++) {
		sum = 0; //반복 돌아갈 때마다 합계 초기화 필수!!
		printf("%d번째 학생의 성적 입력\n", i + 1);
		for (j = 0; j < 3; j++) {
			printf("과목 %d: ", j + 1);
			scanf("%d", &A[i][j]);
			sum += A[i][j]; //A[0][0]+A[0][1]+A[0][2]의 값을 sum에 저장 => 1행, 2행 반복
		}
		A[i][3] = sum;
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) printf("%3d ", A[i][j]);
		printf("\n");
	}
	
	return 0;
}