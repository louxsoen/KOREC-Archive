#include <stdio.h>

void encrypt();

void decrypt();

void Caesar_attack();

int main() {
	char plaintext[] = "hello";
	for (int i = 0; plaintext[i] != '\0'; i++) {
		plaintext[i] = ((plaintext[i] - 96 + 3) % 27) + 96;
	}

	for (int i = 0; plaintext[i] != '\0'; i++) {
		printf("%c", plaintext[i]);
	}
} // �ϴ� ��ȣȭ�� �ص� �ٵ� �̰� �³� �ͱ⵵ �ϰ�..

