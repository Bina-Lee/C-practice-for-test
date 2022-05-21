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

/*
math.h

floor 내림
ceil 올림
fabs 절댓값(function abs)
pow a^b(a의 b승), 입력값 2개
sqrt 제곱근(square root)

변수정의

static 지역변수에서 정의시 전역변수로 작용
register 처리속도가 빨라지지만 컴파일러가 제외시킬가능성
volatile 임베디드에서 주로 사용, ram의 값을 사용하게 함
		register에 있는 값은
		수시로 ram의 값이 바뀌는 임베디드에서는 부적합
extern 다른 파일에 선언되어있는 변수
		글로벌변수로 선언해줘야됨
static 전역변수로 선언할 경우 extern으로 정의해서
		다른 소스에서 사용할 수 없음

문자입출력 라이브러리

getchar buffering echo
getch 둘다 없음
getche echo
	int ch = getch()
	putchar(ch)
	putch(ch)

문자열 입출력 라이브러리
gets(a)

문자처리 라이브러리
ctype.h

isalpha
isupper / islower
isdigit / isalnum / isxdigit
isspace  공백 탭
ispunct 쉼표
isprintf 가시성
iscntrl 제어문자
isascii
toupper
tolower

문자열 처리함수
string.h

strlen
strcmp 문자열 비교, 같으면 0을 출력 주의
strcpy
strcat 문자열 붙이기
strchr 문자열에서 문자 주소 찾음
strstr 문자열에서 문자열의 주소를 찾음

*/