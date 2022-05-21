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
//정렬 코드 만드는데 굳이 끝자리 하나씩 안줄여줘도
//알아서 정렬하는 과정에서 만들어줌
//대충 만들어도 될듯
#endif

#if 0
#include<string.h>
int main() {
	char a[] = "abcde";
	printf("%s", a);
	char* p[] = a; // error, why....?
					//error : 'p' : 초기화에는 중괄호로 묶인 이니셜라이저 목록이 필요합니다
					//a정의할때는 문제 없었는데 포인터배열 정의하는 과정에서 문제가 생김
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
