#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	int arr[10];
	int a;
	for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
	for (int i = 9; i > 0; i--) {
		for (int j =  0; j<i; j++) {
			if (arr[j] < arr[j+1]) {
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < 10; i++)printf("%d\n", arr[i]);
}
#endif

#if 0
int main() {
	int arr[10];
	int a;
	for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < 10; j++) {
			if (arr[j] < arr[j + 1]) {
				a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < 10; i++)printf("%d\n", arr[i]);
}
//���� �ڵ� ����µ� ���� ���ڸ� �ϳ��� ���ٿ��൵
//�˾Ƽ� �����ϴ� �������� �������
//���� ���� �ɵ�
#endif

#if 0
#include<string.h>
int main() {
	char a[] = "abcde";
	printf("%s", a);
	char* p[] = a; // error, why....?
					//error : 'p' : �ʱ�ȭ���� �߰�ȣ�� ���� �̴ϼȶ����� ����� �ʿ��մϴ�
					//a�����Ҷ��� ���� �����µ� �����͹迭 �����ϴ� �������� ������ ����
	printf("%s\n", p);
	printf("%s\n", *p);
}
#endif

#if 0
void foo(int* x, int* y) {
	*x = (*x) * 10;
	*y = (*y) * 10;
}
int main() {
	int a = 30, b = 10;
	foo(&a, &b);
	printf("%d\n%d", a, b);
}
#endif

#if 0
int main() {

}
#endif

/*
math.h

floor ����
ceil �ø�
fabs ����(function abs)
pow a^b(a�� b��), �Է°� 2��
sqrt ������(square root)

��������

static ������������ ���ǽ� ���������� �ۿ�
register ó���ӵ��� ���������� �����Ϸ��� ���ܽ�ų���ɼ�
volatile �Ӻ���忡�� �ַ� ���, ram�� ���� ����ϰ� ��
		register�� �ִ� ����
		���÷� ram�� ���� �ٲ�� �Ӻ���忡���� ������
extern �ٸ� ���Ͽ� ����Ǿ��ִ� ����
		�۷ι������� ��������ߵ�
static ���������� ������ ��� extern���� �����ؼ�
		�ٸ� �ҽ����� ����� �� ����

��������� ���̺귯��

getchar buffering echo
getch �Ѵ� ����
getche echo
	int ch = getch()
	putchar(ch)
	putch(ch)

���ڿ� ����� ���̺귯��
gets(a)

����ó�� ���̺귯��
ctype.h

isalpha
isupper / islower
isdigit / isalnum / isxdigit
isspace  ���� ��
ispunct ��ǥ
isprintf ���ü�
iscntrl �����
isascii
toupper
tolower

���ڿ� ó���Լ�
string.h

strlen
strcmp ���ڿ� ��, ������ 0�� ��� ����
strcpy
strcat ���ڿ� ���̱�
strchr ���ڿ����� ���� �ּ� ã��
strstr ���ڿ����� ���ڿ��� �ּҸ� ã��

*/