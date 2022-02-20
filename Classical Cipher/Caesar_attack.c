#include <stdio.h>

int main() {
	char ciphertext[] = "hello";
	for (int i = 1; i < 26; i++) {
		printf("+%d : ", i);
		for (int j = 0; ciphertext[j] != '\0'; j++) {
			printf("%c", (ciphertext[j] - 97 + i) % 26 + 97);
		}
		printf("\n");
	}
}