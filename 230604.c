#pragma warning(disable:4996)
#include <stdio.h>

//�迭 a�� ���� ����ڷκ��� �޾� �迭 b�� �Ųٷ� ����ϱ�
int main(void) {
	int n, i, j, a[100], b[100];

	printf("���� �� �� �Է��Ͻðڽ��ϱ�? ");
	scanf("%d", &n);

	printf("�ϳ��� �Է�\n");
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (i = 0, j = 4; i < n; i++, j--) b[j] = a[i]; //�Ųٷ� ����ؾ��ϴϱ� i�� 0���� j�� 4���� ����!!

	printf("�Ųٷ� �� �迭\n");
	for (i = 0; i < n; i++) printf("%d ", b[i]);

	return 0;
}

/*
// 0~11������ ��� �� �� ����ڷκ��� ���� �Է¹޾� ���� ��� �ִ��� �˷��ִ� ���α׷� �����
int main(void) {

	int A[3][4] = { {1,5,6,0}, {3,9,2,4}, {10,7,8,11} };
	int n;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) printf("%3d", A[i][j]);
		printf("\n"); //�̰� ����� ���ٿ� 4���� 3�� ��
	}

	printf("� ���� ã���ʴϱ�? (0~11)--> ");
	scanf("%d", &n);

	if (n < 0 || n > 11) {
		printf("0~11 ������ ���� �Է����ּ���.");
		return 0; //0~11 �̿��� �� ������ �����Ű��
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if( A[i][j] == n )
				printf("ã���ô� ���� %d�� %d���� �ֽ��ϴ�.\n", i, j; //������ A[i][j]�� n�̶�� �����ϱ� i�� j���� �ִ� ��!
		}
	}
	return 0;
}

// ��°��� a:130, b=70�� �Ǳ� ���� ������ �ڵ��ϱ�
int main(void) {
	int a = 100, b = 100;
	int* p = &a;
	*p += 30;
	p = &b; //*p�� �������� ����!!! ������ ���� p ���� ������!!!
	*p -= 30;
	printf("a:%d  b:%d\n", a, b);

	return 0;
}

//������� �Է� ���� ���ڸ� �ձ��� �ϳ��� ���ָ鼭 ����ϱ�
int main(void) {

	char s[5];
	printf("���ĺ� 4���� ���� ���� �Է�: ");
	scanf("%s", s);
	for (int i = 0; i < 4; i++)
		printf("%s\n", &s[i]); //%s�� �ּҸ� �������ָ� �� �������� �����

	return 0;
}

//���� �̸� �Է� �޾Ƽ� ���ڿ��� ����ϱ�
int main(void) {

	char food1[100], food2[100], food3[100]; //���ڿ��̴ϱ� char Ÿ�� ����
	char* p1 = food1, * p2 = food2, * p3 = food3;
	printf("�԰� ���� �� 3���� �Է�: ");
	scanf("%s", p1); scanf("%s", p2); scanf("%s", p3);
	printf("���� �ٷ� %s %s %s �غ���\n", food1, food2, food3);
	return 0;
}

// �� ���� �ڸ��� �� ĭ �� ������ �̵��ϴ� ����� �������� ���α׷� �����
void swap(int* one, int* two, int* three) {
	int temp;

	temp = *three;
	*three = *two;
	*two = *one;
	*one = temp;
}

int main(void) {
	int a, b, c;
	printf("�� ���� �Է�: ");
	scanf("%d %d %d", &a, &b, &c);

	swap(&a, &b, &c);
	printf("�� ĭ �� �ڸ� �̵� ��� ==> %d %d %d\n", a, b, c);
	return 0;
}*/