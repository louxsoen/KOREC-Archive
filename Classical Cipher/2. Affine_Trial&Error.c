#include <stdio.h>

int main() {
	char plaintext[] = "The quick brown fox jumps over the lazy dog";
	int messagesize = sizeof(plaintext) / sizeof(char);
	char ciphertext[messagesize];
	int key = 3;

	for (int i = 0; i < messagesize; i++) {
		if (65 <= plaintext[i] && plaintext[i] <= 90)	ciphertext[i] = ((plaintext[i] - 65 + key) % 26) + 65; // A : 0, Z : 25가 됨.
		else if (97 <= plaintext[i] && plaintext[i] <= 122) ciphertext[i] = ((plaintext[i] - 97 + key) % 26) + 97; // a : 0, z : 25가 됨.
		else ciphertext[i] = plaintext[i];
	}

	for (int i = 0; i < messagesize; i++) {
		printf("%c", ciphertext[i]);
	}

	printf("\n");

	for (int i = 0; i < messagesize; i++) {
		if (65 <= ciphertext[i] && ciphertext[i] <= 90) {
			if (ciphertext[i] - 65 - key < 0) plaintext[i] = ((ciphertext[i] - 65 - key + 26) % 26) + 65; // 음수에 대한 나머지 연산은 하지 않음. 수동으로 비슷한 환경 구성
			else plaintext[i] = ((ciphertext[i] - 65 - key) % 26) + 65; // A : 0, Z : 25가 됨.
		}
		else if (97 <= ciphertext[i] && ciphertext[i] <= 122) {
			if (ciphertext[i] - 97 - key < 0)	plaintext[i] = ((ciphertext[i] - 97 - key + 26) % 26) + 97; // 음수에 대한 나머지 연산은 하지 않음. 수동으로 비슷한 환경 구성
			else plaintext[i] = ((ciphertext[i] - 97 - key) % 26) + 97; // a : 0, z : 25가 됨.
		}
		else continue;
	}

	for (int i = 0; i < messagesize; i++) {
		printf("%c", plaintext[i]);
	}
}

/*
아핀 암호는 완성한 카이사르 코드로부터 시작

암호화까지는 (아마도) 문제없이 진행 가능하나... 복호화 과정에서 문제 발생

곱셈의 역원 개념과 역원을 구하는 방법을 알아야 함.

0. 아핀암호
1. 모듈러스
2. 합동식
3. 합동식에서 덧셈, 뺄셈, 곱셈과 연산 연습
4. 유클리디안 알고리즘
5. 프로그래밍 - 함수 작성과 이용, 구현
6. 유클리디안 알고리즘 함수 작성과 구현으로 역원 계산하기

*/