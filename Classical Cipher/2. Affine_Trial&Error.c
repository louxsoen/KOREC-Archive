#include <stdio.h>

void encrypt();

void decrypt();

void Caesar_attack();

int main() {
	char plaintext[] = "hello";
	for (int i = 0; plaintext[i] != '\0'; i++) {
		plaintext[i] = ((plaintext[i] - 97 + 3) % 26) + 97; // a : 0, z : 25�� ��.
	}

	for (int i = 0; plaintext[i] != '\0'; i++) {
		printf("%c", plaintext[i]);
	}
} // �ϴ� ��ȣȭ�� �ص� Ű ���� �°� ���ϵ��� ���� ����, �빮�� �ҹ��� ���� �߰� ����

