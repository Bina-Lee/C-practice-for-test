#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#if 0
int main() {
	//int arr[5][5];
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		scanf("%X", &arr[i][j]);
	//	}
	//}
	int arr[5][5] = { {0x123AB678, 0x1BA45678, 0x23456CD9, 0x2DC56789, 0x34567890},
		{0x09876534, 0x34453454, 0x23445456, 0x78768755, 0x98798798},
		{0x45A76543, 0x8765CB89, 0x8765CD76, 0x56787D54, 0x56787656},
		{0x98765432, 0x23456789, 0x36678899, 0x12345667, 0x65432345},
		{0x98767876, 0x45655555, 0x56676567, 0x87656788, 0x98767800} };

	unsigned char* po = (char*)arr;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 3; k >= 0; k--) {
				printf("%02X ", *(po + i * 20 + j * 4 + k));
			}
			printf("\t");
		}
		printf("\n");
	}
}
#endif

#if 0
void swqp(int* x, int* y, int z[]) {
	int temp = *x;
	*x = *y;
	*y = temp;

	int len = 0;
	for (int cnt = 0; cnt < 101; cnt++) {
		if (z[cnt] == -1) {
			len = cnt;
			break;
		}
	}
	
	for (int cnt = 0; cnt < len / 2; cnt++) {
		temp = z[cnt];
		z[cnt] = z[len - cnt - 1];
		z[len - cnt - 1] = temp;
	}
}

int main() {
	int i = 3, j = 5, k[6] = { 1,2,3,4,5,-1 };
	int *pi = &i, *pj = &j;
	swqp(pi, pj, k);
	printf("i : %d, j : %d\n", i, j);
	for (int a = 0; k[a] != -1; a++)printf("%d ", k[a]);
}
#endif
