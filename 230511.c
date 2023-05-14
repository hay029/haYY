#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	/*
	int arr[5]; // 배열 이름은 arr
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; // 배열 하나하나를 초기화 하는 거임 + 배열은 0부터 시작!!

	for (i = 0; i < 5; i++)
		sum += arr[i];
	
	printf("배열에 저장된 값의 합: %d\n", sum);
	
	printf("\n");

	int arr1[5] = { 1,2,3,4,5 }; // 배열을 한번에 초기화 한 거임
	int arr2[ ] = { 1,2,3,4,5,6,7 }; // 컴파일 할 때 자동으로 [] 안에 7이 들어가짐
	int arr3[5] = { 1,2 }; // 이렇게 초기화 하면 3,4,5번쨰 배열 요소는 0으로 채워짐
	int ar1Len, ar2Len, ar3Len;
	
	printf("배열 arr1의 크기: %d\n", sizeof(arr1));
	printf("배열 arr2의 크기: %d\n", sizeof(arr2));
	printf("배열 arr3의 크기: %d\n", sizeof(arr3)); // 배열의 길이를 계산한 거임

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (int i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]); 
	printf("\n");

	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n\n");
	*/
	// 길이가 5인 int형 배열 선언하여 5개의 정수를 입력받고 최댓값, 최솟값, 총합을 계산하는 프로그램 만들기

	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("정수 입력: ");
		scanf("%d", &arr[i]); //배열에서 scanf할 때도 주소기호 적어줘야함
	}

	max = min = sum = arr[0];
	for (i = 1; i < 5; i++) { //arr[0]으로 초기화를 했으니까 반복은 5번 아니고 4번만 하면 됨
		sum += arr[i];
		if (max < arr[i])
			max = arr[i]; //arr[0]부터 비교해서 젤 큰 숫자를 max에 저장
		if (min > arr[i])
			min = arr[i];
	}
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	printf("총합: %d\n", sum);

	return 0;
}