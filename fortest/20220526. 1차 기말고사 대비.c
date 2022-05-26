#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
//550 11¹ø¹®Á¦?

void merge(int* A, )

int main() {
	int A[4] = { 2,5,7,8 };
	int B[4] = { 1,3,4,6 };
	int C[8];
	merge(A, B, C, 4);
	printf("%d", C[3]);
}
#endif

#if 0
//oj 1514
int main() {
	char arr[100];
	gets(arr);
	char arra[100];
	int j = 0;
	for (int i = 0; i < 100; i++) {
		if (arr[i] == '\0') {
			arra[j] = '\0';
			break;
		}
		else if (arr[i] != 32) {
			arra[j] = arr[i];
			j++;
		}
	}
	printf("%s", arra);
}
#endif

#if 0
// oj1515
#include<math.h>
#include<string.h>
int main() {
	char A[100];
	char B[100];
	gets(A);
	gets(B);
	char* a = A;
	char* b = strstr(A, B);
	if (fabs(b - a) < 100) printf("%d\n", b - a);
	else printf("%d", -1);
}
#endif

#if 0
//oj1516
#include<stdio.h>
int main() {
	int a[5];
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	int b;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}
#endif

#if 0
//1517
#include<string.h>
int main() {
	char S[100];
	gets(S);
	char A[100];
	int l = strlen(S);
	for (int i = 0; i < l; i++) {
		A[i] = S[l - i - 1];
	}
	A[l] = '\0';
	printf("%s", A);
}
#endif

#if 0
//1231
#include<ctype.h>
int main() {
	char a[100][100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		gets(a[i]);
		//printf("%d %s\n", i, a[i]);
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < 100; j++) {
			if (a[i][j] == '\0')break;
			if (isupper(a[i][j])) a[i][j] = tolower(a[i][j]);
			else a[i][j] = toupper(a[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%s",a[i]);
	}
}
#endif

#if 0
void fun(char* a[]) {
	printf("%s", a);
}
int main() {
	char arr[] = "abcdefg";
	fun(arr);
}
#endif
