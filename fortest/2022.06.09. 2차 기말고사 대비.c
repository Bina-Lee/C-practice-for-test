#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

#if 0
//1269 정석답안 아님
int main() {
	char str[50];
	gets(str);
	char* find = str;
	int cnt = 0;
	for (int i = 0; i <= 45; i++) {
		if (str[i] == 'h')if (str[i + 1] == 'e')if (str[i + 2] == 'l')if (str[i + 3] == 'l')if (str[i + 4] == 'o')cnt++;
	}
	printf("%d", cnt);
}
#endif

#if 0
//1538
void mystery(int* a, int* b, int* c, int* d, int* e) {
	int* arr[5] = { a,b,c,d,e };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (*arr[j] > *arr[j + 1]){
				int temp = *arr[j];
				*arr[j] = *arr[j + 1];
				*arr[j + 1] = temp;
			}
		}
	}
}

int main(void) {

	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	mystery(&a, &b, &c, &d, &e);

	printf("%d %d %d %d %d", a, b, c, d, e);

	return 0;
}
#endif

#if 0
//1550 못품
char* func(int n, int arr[], int m) {
	char* S = (char*)malloc(sizeof(char) * n);
	for (int i = 0; i < n; i++) S[i] = 55;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i = arr[j]) {
				S[i] = 89;
			}
		}
	}
	return S;
}
int main(void) {
	char* p = 0;
	int arr[100] = { 0, };

	int n;
	int m;
	int i;

	scanf("%d %d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
	}


	for (i = 0; i < m; i++) {
		printf("%d ", *((p = func(n, arr, m)) + arr[i]));
		printf("%d ", *((p = func(n, arr, m)) + arr[i] + 1));
	}

	free(p);

	return 0;
}
#endif

#if 0
//1551 풀다 말았음
int main() {
	int a;
	scanf("%d", &a);
	int** arr = (int**)malloc(sizeof(int*) * a);
	for (int i = 0; i < a; i++) {
		int b, c;
		scanf("%d %d", &b, &c);
		//if (arr[b] != 0)break;
		arr[b] = (int*)malloc(sizeof(int) * c);
		for (int j = 0; j < c; j++) {
			scanf("%d", &arr[b][j]);
		}
	}
	int b, c;
	scanf("%d %d", &b, &c);
	printf("%d", arr[b][c]);

	for (int i = 0; i < a; i++) {
		free(arr[i]);
	}
	free(arr);
}
#endif

#if 0
int main() {
	FILE* fp = fopen("text.txt", "wt");
	fputs("writetext", fp);
	fclose(fp);
	fp = fopen("text.txt", "rt");
	char str[100];
	fgets(str, 99, fp);
	printf("%s", str);
	fclose(fp);
}
#endif

#if 0
int main() {
	FILE* fp = fopen("sample.bin", "wb");
	fwrite(9999, sizeof(int), 1, fp);
	fclose(fp);
}
#endif

#if 0
int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int cnt = 0;
	int a[6] = {
		A * 100 + B * 10 + C,
		A * 100 + C * 10 + B,
		B * 100 + A * 10 + C,
		B * 100 + C * 10 + A,
		C * 100 + A * 10 + B,
		C * 100 + B * 10 + A
	};
	for (int i = 0; i < 6; i++) {
		int check = 0;
		for (int j = 2; j < a[i];j++) {
			if (a[i] % j == 0) {
				check = 1;
				break;
			}
		}
		if (check == 0) cnt++;
	}
	printf("%d", cnt);
}
#endif
