//1312 c언어
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, n, result;

	scanf("%d %d %d", &a, &b, &n);

	a %= b; //먼저 한번 나머지 구하기

	for (int i = 0;i < n;i++) { //10을 곱해가며 이후 나머지 구하기
		a *= 10;
		result = a / b;
		a %= b;
	}
	
	printf("%d\n", result);
}