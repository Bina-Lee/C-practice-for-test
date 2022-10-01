//New Online Judge 1055
//eseoj.selenium.or.kr

//채점 번호 2690

//채점결과 : Runtime Error AC:67%
//동적할당을 받는 과정에서 시간이 제체된 것으로 파악됨

//체점결과 세부사항
//xplaination
//Segmentation fault : 배열 크기를 벗어난 위치에 접근했거나, 포인터를 잘 못 사용하였거나, 접근이 제한된 메모리 영역에 접근했습니다.
//그러면 새 OJ에서 동적할당은 사용하지 못하는건가요..?

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int** arr1 = (int**)malloc(sizeof(int*) * a);
    for (int i = 0; i < a; i++)arr1[i] = (int*)malloc(sizeof(int) * b);
    for (int i = 0; i < a; i++)for (int j = 0; j < b; j++)scanf("%d", &arr1[i][j]);

    int c, d;
    scanf("%d %d", &c, &d);
    int** arr2 = (int**)malloc(sizeof(int*) * c);
    for (int i = 0; i < c; i++)arr2[i] = (int*)malloc(sizeof(int) * d);
    for (int i = 0; i < c; i++)for (int j = 0; j < d; j++)scanf("%d", &arr2[i][j]);

    if (b != c) {
        printf("Unavaliable");
        return 0;
    }

    int** result = (int**)malloc(sizeof(int*) * a);
    for (int i = 0; i < a; i++)result[i] = (int*)malloc(sizeof(int) * d);

    for (int i = 0; i < a; i++)for (int j; j < d; j++)result[i][j] = 0;

    for (int i = 0; i < a; i++)for (int j = 0; j < d; j++)for (int k = 0; k < b; k++)result[i][j] = result[i][j] + arr1[i][k] * arr2[k][j];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < a; i++)free(arr1[i]);
    free(arr1);
    for (int i = 0; i < c; i++)free(arr2[i]);
    free(arr2);
    for (int i = 0; i < a; i++)free(result[i]);
    free(result);
}



#if 0
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr1[100][100];
    for (int i = 0; i < a; i++)for (int j = 0; j < b; j++)scanf("%d", &arr1[i][j]);

    int c, d;
    scanf("%d %d", &c, &d);
    int arr2[100][100];
    for (int i = 0; i < c; i++)for (int j = 0; j < d; j++)scanf("%d", &arr2[i][j]);

    if (b != c) {
        printf("Unavaliable");
        return 0;
    }

    int result[100][100] = { 0, };

    for (int i = 0; i < a; i++)for (int j = 0; j < d; j++)for (int k = 0; k < b; k++)result[i][j] = result[i][j] + arr1[i][k] * arr2[k][j];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
#endif
