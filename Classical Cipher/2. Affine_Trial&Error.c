#include <stdio.h>

void encrypt();

void decrypt();

void Caesar_attack();

int main() {
	char plaintext[] = "hello";
	for (int i = 0; plaintext[i] != '\0'; i++) {
		plaintext[i] = ((plaintext[i] - 97 + 3) % 26) + 97; // a : 0, z : 25가 됨.
	}

	for (int i = 0; plaintext[i] != '\0'; i++) {
		printf("%c", plaintext[i]);
	}
} // 일단 암호화만 해둠 키 값에 맞게 변하도록 변경 예정, 대문자 소문자 연산 추가 예정

