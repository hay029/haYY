#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	/*
	int arr[5]; // �迭 �̸��� arr
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; // �迭 �ϳ��ϳ��� �ʱ�ȭ �ϴ� ���� + �迭�� 0���� ����!!

	for (i = 0; i < 5; i++)
		sum += arr[i];
	
	printf("�迭�� ����� ���� ��: %d\n", sum);
	
	printf("\n");

	int arr1[5] = { 1,2,3,4,5 }; // �迭�� �ѹ��� �ʱ�ȭ �� ����
	int arr2[ ] = { 1,2,3,4,5,6,7 }; // ������ �� �� �ڵ����� [] �ȿ� 7�� ����
	int arr3[5] = { 1,2 }; // �̷��� �ʱ�ȭ �ϸ� 3,4,5���� �迭 ��Ҵ� 0���� ä����
	int ar1Len, ar2Len, ar3Len;
	
	printf("�迭 arr1�� ũ��: %d\n", sizeof(arr1));
	printf("�迭 arr2�� ũ��: %d\n", sizeof(arr2));
	printf("�迭 arr3�� ũ��: %d\n", sizeof(arr3)); // �迭�� ���̸� ����� ����

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
	// ���̰� 5�� int�� �迭 �����Ͽ� 5���� ������ �Է¹ް� �ִ�, �ּڰ�, ������ ����ϴ� ���α׷� �����

	int arr[5];
	int max, min, sum, i;

	for (i = 0; i < 5; i++) {
		printf("���� �Է�: ");
		scanf("%d", &arr[i]); //�迭���� scanf�� ���� �ּұ�ȣ ���������
	}

	max = min = sum = arr[0];
	for (i = 1; i < 5; i++) { //arr[0]���� �ʱ�ȭ�� �����ϱ� �ݺ��� 5�� �ƴϰ� 4���� �ϸ� ��
		sum += arr[i];
		if (max < arr[i])
			max = arr[i]; //arr[0]���� ���ؼ� �� ū ���ڸ� max�� ����
		if (min > arr[i])
			min = arr[i];
	}
	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	printf("����: %d\n", sum);

	return 0;
}