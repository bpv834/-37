#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char str1[100] = "";
	int sz = sizeof(str1) / sizeof(str1[0]);
	int i = 0;
	int count = 0;
	char* p = str1;
	printf("문자열?");
	gets_s(str1, sizeof(str1));

	while (p[0] != '\0') {
		if (isalpha(p[0])) {
			count++;
		}
		p++;
	}
	printf("영문자의 개수:%d", count);
}
