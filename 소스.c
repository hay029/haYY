#pragma warning(disable:4996)
#include <stdio.h>

int main(void){
	int num = 0;
	
	while (num < 5){
		printf("Hello World!%d\n", num);
		num++;
	}

	printf("--------------------\n");

	int dan = 0, number = 1;
	printf("�� ��? ");
	scanf("%d", &dan);

	while (number < 10){
		printf("%d * %d = %d\n", dan, number, dan * number);
		number++;
	}

	printf("---------------------\n");

	/*���� ���� �ϳ� �Է� ���� ���� �� ����ŭ 3�� ����� ����ϴ� ���α׷� �ۼ�
	5�� �Է� ������ 3 6 9 12 15�� ��µ� ��*/

	int a = 0, b = 0;
	printf("���� ���� �ϳ� �Է�: ");
	scanf("%d", &a);

	while (b < a) {
		b++;				// printf ������ �̰� ������ 3*b�� ���� 0�� ������ ������ 0 3 6 9 12 �� ��µ� printf �տ� �־�� ��
		printf("%d ", 3 * b);
	}

	printf("\n---------------------\n");

	/*����ڷκ��� ��� ���� �Է��� �޾� �� ���� ���ϱ�. ����ڰ� 0�� ������ �Էµ� ������ ���� ����� ��*/
	
	int c = 1, sum = 0;
	while (c != 0) {
		printf("������ �Է��ϼ���. ");
		scanf("%d", &c);
		sum += c;
	}
	printf("%d\n", sum);	// while�� �ȿ� ������ �ݺ��� ���ư� ������ �� ���� ������ �� while�� �߰�ȣ �ݰ� ���� ����

	printf("--------------------\n");

	/*������ �ܼ� �Է� �޾Ƽ� �������� ����ϱ�*/

	int dan2, num2 = 9;		// �����̴ϱ� ������ ���� ���� ������ ���� ����

	printf("�� ��? ");
	scanf("%d", &dan2);

	while (num2 > 0) {
		printf("%d * %d = %d\n", dan2, num2, dan2 * num2);
		num2--;		// ���������� ������ ��������ϱ� ������ ���������ϸ� ��
	}

	return 0;
}