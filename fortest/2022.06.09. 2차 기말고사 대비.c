#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#if 0
//1275
int main() {
	char str[30];
	gets(str);
	int n;
	scanf(" %d ", &n);
	char in;
	scanf("%c", &in);
	int length = strlen(str);
	char prn[31];
	for (int i = 0; i < length; i++) {
		if (i < n-1) {
			prn[i] = str[i];
		}
		else {
			prn[i + 1] = str[i];
		}
	}
	prn[n-1] = in;
	prn[length + 1] = '\0';
	printf("%s", prn);
}
#endif

#if 1
//1265

#endif
