#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	/*
	double ff, cc;

	printf("ȭ���µ� �Է�: ");
	scanf("%lf", &ff);

	cc = 5.0 / 9 * (ff - 32);
	printf("�����µ��� %.2f�Դϴ�.", cc);

	�ݴ�� �����µ��� �Է¹޾� ȭ���� �����Ͻÿ�. */

	double ff, cc;

	printf("�����µ� �Է�: ");
	scanf("%lf", &cc);

	ff = (9.0 / 5) * cc + 32;
	printf("ȭ���µ��� %.2f�Դϴ�.\n", ff);

	printf("\n");
	int money, price, change;
	printf("���� ��: ");
	scanf("%d", &price);
	printf("���� ����: ");
	scanf("%d", &money);

	change = money - price;
	printf("�Ž������� %d���Դϴ�.\n", change);
	printf("-----------------\n");
	printf("��õ�� %d��\n", change / 5000);
	printf("õ�� %d��\n", (change % 5000) / 1000);
	printf("����� %d��\n", (change % 5000 % 1000) / 500); // %�ؼ� ������ �������� 5000�� �� ������ �� �� �ִ� ����

	printf("\n");
	int x, y, z;
	printf("�� ���� �Է�: ");
	scanf("%d %d %d", &x, &y, &z);

	printf("���� ������ ����� %d \n", (x + y) / z);
	printf("�Ǽ� ������ ����� %f \n", (float)(x + y) / z); // �� ��ȯ �Ϸ��� �տ� (Ÿ��) �����ָ� ��

	printf("\n");
	int num1 = 3;

	(num1 % 2 == 0) ? printf("¦��") : printf("Ȧ��");

	//if-else������ �ٲٱ�

	printf("\n");
	int num2 = 4;
	if (num2 % 2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");

	printf("\n");
	int ticket;
	printf("���� �Է�: ");
	scanf("%d", &ticket);

	switch (ticket) {
	case 1:
		printf("���� "); //break; ������ ���� 1 ���� �� ������ 10�� ���� ����
	case 2:
		printf("10�� ");
		break;
	default:
		printf("����� ");
	}

	return 0;
}