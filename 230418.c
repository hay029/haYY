#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h> //rand() ��� �� �ʼ�
#include <time.h> //srand((unsigned)time(NULL) ��� �� �ʼ�


int main(void) {
	int com, user, point = 30;
	srand((unsigned)time(NULL)); //rand() ��� ���� �ѹ� ���, ������ �� �������, rand()�� ��� ���� ������ ���� 
	com = rand() % 2; //0, 1 �߿� ����

	printf("Ȧ(1), ¦(0) ����: ");
	scanf("%d", &user);

	if (com == user) {
		point += 30;
		printf("������! ����Ʈ�� %d�� \n", point);
	}
	else {
		point -= 30;
		printf("Ʋ����! ����Ʈ�� %d�� \n", point);
	}

	printf("\n");
	char rain;

	printf("�� ������? yes�� Y,y, no�� �ٸ� ����: ");
	scanf("%c", &rain); //������ ���� �����ϱ� %c �������

	if (rain == 'y' || rain == 'Y')
		printf("��� �غ�\n"); // ���� �ۼ� �� �߰�ȣ ���� ���� ���� �̻��̸� ������ �߰�ȣ�ϱ�!!
	printf("�Ұ��� ����\n");

	printf("\n");
	int trip;

	srand((unsigned)time(NULL));
	trip = rand() % 4 + 1;

	switch (trip) {
	case 1:
		printf("���ֵ� \n");
		break; //���⼭ break; ������ rand�Լ��� ���� ���� ���͵� ���ֵ� ������ �Ѵ� ��µ�
	case 2:
		printf("������ \n");
		break;
	default:
		printf("�Ͽ��� \n");
	}

	printf("\n");
	int num1, num2, max;

	printf("�� �� �Է�: ");
	scanf("%d %d", &num1, &num2);

	max = (num1 > num2) ? num1 : num2;
	printf("ū ���� %d�Դϴ�.\n", max);

	printf("num2�� ������ %d \n", (num2 < 0) ? -num2 : num2);

	printf("num1=%d�� ", num1);
	(num1 % 2 == 0) ? printf("¦��") : printf("Ȧ��");

	// if������ �ٲٸ�?
	printf("\n");
	int num3, num4, max2;

	printf("�� �� �Է�: ");
	scanf("%d %d", &num3, &num4);

	if (num3 > num4) max2 = num3;
	if (num4 > num3) max2 = num4;
	printf("ū ���� %d�Դϴ�.\n", max2);

	if (num4 < 0) num4 = -num4;
	printf("num4�� ������ %d\n", num4);

	if (num3 % 2 == 0) printf("¦��\n");
	if (num3 % 2 != 0) printf("Ȧ��\n");


	return 0;
}