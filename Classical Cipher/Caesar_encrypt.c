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
} // 일단 암호화만 해둠 근데 이게 맞나 싶기도 하고..

