#pragma warning(disable:4996)
#include <stdio.h>
/*
int Add(int num1, int num2) {  //�������޵� �ǰ� ��ȯ���� ����
	return num1 + num2;
}

void ShowAddResult(int num) {  //���������� ������ ��ȯ���� ����(��ȯ �� �� ������ void ���� ��)
	printf("������� ���: %d\n", num);
}

int ReadNum(void) {  //������ ���ڴ� ���� ��ȯ���� ����(return �����)
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) {  //���� ���ڵ� ���� ��ȯ���� ���� �׳� �ȳ���Ʈ ������
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("�� ���� ������ �Է��ϼ���. \n");
}

int main(void) {
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);

	//���� ������ main�Լ������� ���� �ִ� ������ �Լ����� main���� ȣ���ؾ� ������ ���ƿ��� ��

	printf("\n");
	//�� ���� ������ ���ڷ� ���޹޾� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� ���� ���� ���� ��ȯ�ϴ� �Լ� �����
	*/

int Big(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1; // ��ȯ�� �ִ� ����
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3; 
}

int Small(int num1, int num2, int num3) {
	if (num1 < num2 && num1 < num3)
		return num1;
	else if (num2 < num1 && num2 < num3)
		return num2;
	else
		return num3;
}

int main(void) {
	int num1, num2, num3;
	printf("�� ���� ������ �Է��ϼ���. ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("���� ū ���� %d\n", Big(num1, num2, num3));
	printf("���� ���� ���� %d\n", Small(num1, num2, num3));  // �ε� ������ main�Լ�����! main���� �Լ� ȣ�� �ؾ� �ٸ� �Լ� ��� ������

	/*Big, Small �κ� �� ���� ���� ���� �����ڵ� ���� �� ����

	ex) Big �κп���
		if(num1>num2)
			return (num1>num3) ? num1 : num3;
		else
			return (num2>num3) ? num2 : num3;

		Small �κп���
		if(num1<num2)
			return (num1>num3) ? num1 : num3;
		else
			return (num2<num3) ? num2 : num3;
	*/

	/*main �Լ��� ���� �ۼ��ϰ� ������ int Big(int num1, int num2, int num3); �� ���� ���� main�Լ� �ۼ��ϰ� �ٽ� Big�Լ� ���� ���� �ۼ��ϱ�*/
	return 0;
}