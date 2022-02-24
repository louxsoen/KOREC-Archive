#include <stdio.h>

int main() {
	char plaintext[] = "The quick brown fox jumps over the lazy dog";
	int messagesize = sizeof(plaintext) / sizeof(char);
	char ciphertext[messagesize];
	int key = 3;

	for (int i = 0; i < messagesize; i++) {
		if (65 <= plaintext[i] && plaintext[i] <= 90)	ciphertext[i] = ((plaintext[i] - 65 + key) % 26) + 65; // A : 0, Z : 25�� ��.
		else if (97 <= plaintext[i] && plaintext[i] <= 122) ciphertext[i] = ((plaintext[i] - 97 + key) % 26) + 97; // a : 0, z : 25�� ��.
		else ciphertext[i] = plaintext[i];
	}

	for (int i = 0; i < messagesize; i++) {
		printf("%c", ciphertext[i]);
	}

	printf("\n");

	for (int i = 0; i < messagesize; i++) {
		if (65 <= ciphertext[i] && ciphertext[i] <= 90) {
			if (ciphertext[i] - 65 - key < 0) plaintext[i] = ((ciphertext[i] - 65 - key + 26) % 26) + 65; // ������ ���� ������ ������ ���� ����. �������� ����� ȯ�� ����
			else plaintext[i] = ((ciphertext[i] - 65 - key) % 26) + 65; // A : 0, Z : 25�� ��.
		}
		else if (97 <= ciphertext[i] && ciphertext[i] <= 122) {
			if (ciphertext[i] - 97 - key < 0)	plaintext[i] = ((ciphertext[i] - 97 - key + 26) % 26) + 97; // ������ ���� ������ ������ ���� ����. �������� ����� ȯ�� ����
			else plaintext[i] = ((ciphertext[i] - 97 - key) % 26) + 97; // a : 0, z : 25�� ��.
		}
		else continue;
	}

	for (int i = 0; i < messagesize; i++) {
		printf("%c", plaintext[i]);
	}
}

/*
���� ��ȣ�� �ϼ��� ī�̻縣 �ڵ�κ��� ����

��ȣȭ������ (�Ƹ���) �������� ���� �����ϳ�... ��ȣȭ �������� ���� �߻�

������ ���� ����� ������ ���ϴ� ����� �˾ƾ� ��.

0. ���ɾ�ȣ
1. ��ⷯ��
2. �յ���
3. �յ��Ŀ��� ����, ����, ������ ���� ����
4. ��Ŭ����� �˰���
5. ���α׷��� - �Լ� �ۼ��� �̿�, ����
6. ��Ŭ����� �˰��� �Լ� �ۼ��� �������� ���� ����ϱ�

*/