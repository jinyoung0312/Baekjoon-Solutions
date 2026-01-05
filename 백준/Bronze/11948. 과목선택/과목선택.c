//11948 c언어
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int score[6];
	int min = 101, sum = 0;

	for (int i = 0;i < 6;i++) scanf("%d", &score[i]);

	for (int i = 0;i < 4;i++) {
		sum += score[i];
		if (min > score[i]) min = score[i];
	}
	sum -= min;
	if (score[4] > score[5]) sum += score[4];
	else sum += score[5];

	printf("%d", sum);
}