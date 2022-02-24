#include <stdio.h> // 헤더
 
int main() { // 메인 함수
	char ciphertext[] = "hello"; // 문자열 (아니면 아예 문자를 암호화)

	// 모든 알파벳을 쓰는 문장이 있는데 그거를 카이사르 테스트로 두면 알파벳 전체 경우와 함께 공백 문자도 관리할 수 있으니까 좋을듯...? The quick brown fox jumps over the lazy dog
	// 문자열 접근 => 배열 개념
	ciphertext[0] = ciphertext[0] + 3;
	ciphertext[1] = ciphertext[0] + 3;
	ciphertext[2] = ciphertext[0] + 3;
	ciphertext[3] = ciphertext[0] + 3;
	ciphertext[4] = ciphertext[0] + 3;
	
	printf("%c", ciphertext[0]);
	printf("%c", ciphertext[1]);
	printf("%c", ciphertext[2]);
	printf("%c", ciphertext[3]);
	printf("%c", ciphertext[4]);
	
}

/* 긴 주석

문제점: 영어의 영역을 벗어나는 공간 있음. (아스키 코드와 char, if문과 연산자) 

문자열이 길어지면 문자열 길이만큼 명령어를 반복해서 적어야 함. (반복문)

기타 복합대입연산자.

*/

/*

발생할 예정인 문제점 :

if문 작성시 두 비교식을 따로 작성해야 함. (a < b && b < c) 이렇게
	- 처음에는 65 < x  && x < 90 && 97 < x && ... 이렇게 한번에 다루다가
	- 아래 부분에서 대문자 소문자마다 다르게 연산 적용해야 한다는거 알고 분리해서 적용

아스키 알파벳은 65 ~ 90 인데 Z 이후부터는 어떻게 A로 되돌릴 것인가 ( 나머지 연산자, 아스키 값에서 97 빼버리기 )

알파벳 영역 외의 아스키 코드를 전부 조건문을 통해서 범위 지정을 해줘야 할까? ( else 문 )

*/