//1523
#if 0
#include<stdio.h>
#include<string.h>
main() {
	char s[21];
	gets(s);
	int count = 0;
	int check;
	int length = strlen(s);
	for (int i = 0; i < length; i++) {
		check = 0;
		for (int j = 0; j < length - 1; j++) {
			int num1, num2;
			if (j >= i) { num1 = j + 1; }
			else { num1 = j; }
			if (length - j - 1 <= i) { num2 = length - j - 2; }
			else { num2 = length - j - 1; }

			if (s[num1] != s[num2]) {
				check = 1;
				break;
			}
		}
		if (check != 1) { count = count + i; }
	}
	printf("%d", count);
}
#endif

//1524
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct alpha{
	char a;
	int c;
};
int main() {
	struct alpha p[26] = {
		{'a',0},
		{'b',0},
		{'c',0},
		{'d',0},
		{'e',0},

		{'f',0},
		{'g',0},
		{'h',0},
		{'i',0},
		{'j',0},

		{'k',0},
		{'l',0},
		{'m',0},
		{'n',0},
		{'o',0},

		{'p',0},
		{'q',0},
		{'r',0},
		{'s',0},
		{'t',0},
		
		{'u',0},
		{'v',0},
		{'w',0},
		{'x',0},
		{'y',0},

		{'z',0},
	};
	char s[31];
	gets(s);
	char s1[31];

	for (int i = 0; i < 31; i++) {
		if (s[i] == '\0') { 
			s1[i] = '\0';
			break; 
		}
		s1[i] = tolower(s[i]);
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 30; j++) {
			if (p[i].a == s1[j]) {
				p[i].c++;
			}
		}
	}
	char x;
	int y=0;
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			if (p[j].c < p[j+1].c) {
				y = p[j+1].c;
				p[j + 1].c = p[j].c;
				p[j].c = y;
				x = p[j+1].a;
				p[j + 1].a = p[j].a;
				p[j].a = x;
			}
		}
	}
	char w[26];
	for (int i = 0; i < 26; i++) {
		if (p[i].c == 0) {
			w[i] = '\0';
			break;
		}
		w[i] = p[i].a;
	}
	printf("%s",w);
}
#endif

//1525
#if 1
#include<stdio.h>
int main() {

}
#endif
