#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	/*
	char arr[5];
	FILE* fa = fopen("C:\\Users\\82102\\OneDrive\\���� ȭ��\\a.txt", "r"); //��� �ۼ� �� �������� �� ���ؾ� ��! \\�ؾ��� �������� �ϳ��� ���� ��
	FILE* fb = fopen("C:\\Users\\82102\\OneDrive\\���� ȭ��\\b.txt", "w"); // r=�б�� w=�����

	if (fa == NULL || fb == NULL)
	{
		printf("���� ���� ����\n"); return 0;
	} // fa�� fb�� �ƹ��� �����ϰ� ���� �Ǿ� ���� ������ ���� ��Ŵ (if�� �ȿ� ���� �� ���ϱ� �߰�ȣ �ʼ�)
	for (int i = 0; i < 5; i++) fscanf(fa, "%c", &arr[i]);
	for (int i = 4; i >= 0; i--) fprintf(fb, "%c", arr[i]); //���Ͽ��� scanf, printf �տ� f �ٿ���

	fclose(fa); //���� �ݾ���
	fclose(fb);
	printf("ó�� �Ϸ�. b.txt�� ��� ����� Ȯ���ϼ���! \n");
	


	//�ݺ��� �̿��ؼ� 1~100 ������ �� �� 5,7,9 ����� ���� ����ϴ� ���α׷� �ۼ�
	FILE* fp = fopen("C:\\Users\\82102\\OneDrive\\���� ȭ��\\����\\Project13\\a.txt", "w");

	if (fp == NULL)
	{
		printf("���� ���� ����\n"); return 0;
	}

	for (int i = 0; i < 100; i++) {
		if (i % 5 == 0 || i % 7 == 0 || i % 9 == 0)
			continue;
			fprintf(fp, "%d\n", i);
	}

	fclose(fp);
	printf("��µǾ����ϴ�. Ȯ���ϼ���.\n");
*/

	//30���� �Ǽ��� ������ thirty.txt ������ �о �ִ밪 �ּҰ��� ���� �� �ܼ� ����ϱ�

	double n, max = -999999, min = 999999;

	FILE *fa = fopen("C:\\Users\\82102\\OneDrive\\���� ȭ��\\����\\Project13\\thirty.txt", "r"); //r �� �� ū����ǥ ���ֱ�!! ��������ǥ �ƴ�

	if (fa == NULL) {
		printf("���� ���� ����\n"); return 0;
	}

	for (int i = 0; i < 30; i++) {
		fscanf(fa, "%lf", &n);
		if (n > max) max = n; //max �ʱ�ȭ�� �� ���� �� �־�� n�� �� ������ ũ�� max�� n�� ��
		if (n < min) min = n;
	}

	printf("�ִ밪 %g\n", max);
	printf("�ּҰ� %g\n", min);

	fclose(fa);

	return 0;
}