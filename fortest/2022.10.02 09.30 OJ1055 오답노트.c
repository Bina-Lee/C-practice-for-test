#define _CRT_SECURE_NO_WARNINGS

//New Online Judge 1055
//eseoj.selenium.or.kr

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

    for (int i = 0; i < a; i++)for (int j=0; j < d; j++)result[i][j] = 0;

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
