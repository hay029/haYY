#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("��ȣ ����? ");
	scanf("%d", &opt);

	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2; // �̷��� ������ if ���� �� ���� �����ϰ� �� => ��ȿ����

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2; // �̷��� ���� �����Ǹ� else ���Ĵ� �ǳʶ�

	printf("���: %lf\n\n", result);



	/*
	ex) �� ���� ������ �Է¹޾� �� ���� ���� ����ϱ� (��, ������ ū ������ ���� ���� �� ����� ����� ��)
	*/

	int a, b, c;

	printf("�� ���� ������ �Է��ϼ���. ");
	scanf("%d %d", &a, &b);

	if (a < b)
		c = b - a;
	else
		c = a - b;

	printf("���� ���: %d\n\n", c);


	/*
	ex2) �л��� ��ü ��������� ���� ���� ����ϱ�
	90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C, 60�� �̻��̸� D, �� �̸��̸� F�� ���
	����, ����, ���� ������ �Է� �ް� ��� ���� �� ���� ����� ��
	*/

	double k, e, m, avr; // ������� ���� ����, ���� ����, ���� ����, ���

	printf("����, ����, ���� ������ ���ʷ� �Է��ϼ���. ");
	scanf("%lf %lf %lf", &k, &e, &m);

	avr = (k + e + m) / 3.0;
	printf("��� ������ %g�Դϴ�.\n", avr);

	if (avr >= 90.0)
		printf("������ A�Դϴ�.\n");
	else if (avr >= 80.0)
		printf("������ B�Դϴ�.\n");
	else if (avr >= 70.0)
		printf("������ C�Դϴ�.\n");
	else if (avr >= 60.0)
		printf("������ D�Դϴ�.\n");
	else
		printf("������ F�Դϴ�.\n\n");

	return 0;
}