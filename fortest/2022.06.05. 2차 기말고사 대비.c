#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#if 0
//1525
#include<stdio.h>

struct count {
	int num;
	int cnt;
};

int main() {
	struct count a[10] = { 
		{0,0},{1,0},{2,0},{3,0},{4,0},
		{5,0},{6,0},{7,0},{8,0},{9,0} 
	};
	//for (int i = 0; i < 10; i++) printf("%d\n",a[i].cnt);
	while (1) {
		int integer, p;
		scanf("%d", &integer);
		if (integer == -999)break;
		while (integer != 0) {
			p = integer % 10;
			switch (p) {
			case 0:a[0].cnt++; break;
			case 1:a[1].cnt++; break;
			case 2:a[2].cnt++; break;
			case 3:a[3].cnt++; break;
			case 4:a[4].cnt++; break;
			case 5:a[5].cnt++; break;
			case 6:a[6].cnt++; break;
			case 7:a[7].cnt++; break;
			case 8:a[8].cnt++; break;
			case 9:a[9].cnt++; break;
			}
			integer = integer / 10;
			//for (int i = 0; i < 10; i++) printf("%d\n", a[i].cnt);
		}
	}
	struct count b;
	b = a[0];
	for (int i = 1; i < 10; i++) {
		b = (a[i].cnt > b.cnt) ? a[i] : b;
	}
	printf("%d %d", b.num, b.cnt);
}
#endif

#if 0
//1526
int main() {
	int a, b, c, d, count = 0, check = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	c = b;
	while (c != 0) {
		c = c / 10;
		count++;
	}
	c = pow(10,count);
	count = 0;
	while (1) {
		d = a - b;
		if (d % c == 0) break;
		if (a == 0) {
			check = 1;
			break;
		}
		count++;
		a = a / 10;
	}
	if (check == 1) {
		printf("%d", 0);
		return 0;
	}
	c = c * pow(10, count) / 10;
	printf("%d", c);
}
#endif

#if 0
//1527
int main() {
	int n, count = 0;
	scanf("%d", &n);
	while (n != 1) {
		switch (n%2) {
		case 0:n = n / 2; break;
		case 1:n = n * 3 + 1; break;
		}
		count++;
	}
	printf("%d", count);
}
#endif

#if 0
//1529
struct person {
	char name[10];
	int age;
};

struct person prsn[10];
int count;

void addToInfo(struct person v) {
	prsn[count] = v;
	count++;
}
void showInfo(void) {
	for (int i = 0; i < count; i++) {
		printf("%s ---> %d\n", prsn[i].name, prsn[i].age);
	}
}
int main() {
	// �ִ� ���� 9�� �̸��� ���̸� n�� (�ִ� n=10) �Է¹޾� 
	// ����ü�� ���� ��, ����ü �迭�� �����ϴ� �Լ� addToInfo()�� ȣ���Ѵ�.
	// �̸��� "end"�� �ԷµǸ�, 
	// showInfo() �Լ��� ȣ���Ͽ�, ����ü �迭�� ������ �Է¼����� ����Ѵ�.
	struct person p;
	char name[10];
	unsigned int age;


	while (1) {
		scanf("%s", name);
		if (strcmp(name, "end") == 0) {
			break;
		}
		scanf("%d", &age);
		strcpy(p.name, name);
		p.age = age;
		addToInfo(p);
	}

	// ����ü �迭�� ����� ������ �Է¼����� ����ϴ� �Լ�
	// ��������� "name ---> age"
	showInfo();

	return 0;
}
#endif

#if 0
//1550 dkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk
//�Լ� func�� �μ���
//int n,
//int* arr,
//int m �� �޴´�.
//
//func�� 'n' bytes �� ���� S�� ����(�����Ҵ��� 0��)���� �Ҵ�޴´�. (n�� 0���� ũ��)
//ũ�� 'm'�� int �迭 'arr'�� m���� �������� ���µ�, (m�� 0���� ũ��)
//�� ���� ���� S���� �� 89�� ä���� �ϴ� ����Ʈ ���� ��ġ, �� �ε���(0���� ����)�� �ǹ��Ѵ�. (�� ��ġ���� 0���� ũ��)
//���� S���� ������ �������� �� 55�� ä���� �Ѵ�.
//
//func�� ���� S�� �����ּҸ� char ������������ ��ȯ�Ѵ�.
//�Ʒ� ���α׷����� ǥ�õ� �κп� �Լ� func�� �����Ͻÿ�(�ʿ��� ������� �߰��Ͻñ���)

char* func(int n, int* arr, int m) {
	char* S = (char*)malloc(sizeof(char) * n);
	for (int i = 0; i < m; i++) {

	}
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
//1535
struct student {
	int id;
	int age;
	float height;
};
int mystery(struct student v[], char cmd) {
	struct student forreturn = v[0];
	switch (cmd) {
	case 'A':
		for (int i = 1; i < 10; i++) {
			if (v[i].id >= 0) {
				forreturn = (forreturn.age < v[i].age) ? v[i] : forreturn;
			}
		}
		break;
	case 'a':
		for (int i = 1; i < 10; i++) {
			if (v[i].id >= 0) {
				forreturn = (forreturn.age > v[i].age) ? v[i] : forreturn;
			}
		}
		break;
	case 'H':
		for (int i = 1; i < 10; i++) {
			if (v[i].id >= 0) {
				forreturn = (forreturn.height < v[i].height) ? v[i] : forreturn;
			}
		}
		break;
	case 'h':
		for (int i = 1; i < 10; i++) {
			if (v[i].id >= 0) {
				forreturn = (forreturn.height > v[i].height) ? v[i] : forreturn;
			}
		}
		break;
	}
	return forreturn.id;
}

int main(void) {

	struct student A[10];

	int id;
	int age;
	float height;
	char cmd;

	int idx = 0;
	while (1) {

		scanf("%d %d %f", &id, &age, &height);
		A[idx].id = id;
		A[idx].age = age;
		A[idx].height = height;
		idx++;
		if (idx == 10) {
			break;
		}
	}
	scanf(" \n %c", &cmd);

	printf("%d", mystery(A, cmd));
	return 0;
}
#endif

#if 0
//1536
struct lph {
	int alphabet;
	int count;
};
int mystery(char str[]) {
	struct lph a[52];
	for (int i = 0; i < 26; i++) {
		a[i].alphabet = 'a'+i;
		a[i].count = 0;
		a[i + 26].alphabet = 'A' + i;
		a[i + 26].count = 0;
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	for (int i = 0; i < 100; i++) {
		if (str[i] == '\0')break;
		for (int j = 0; j < 52; j++) {
			if (str[i] == a[j].alphabet) {
				a[j].count++;
			}
		}
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			if (a[j].count < a[j + 1].count) {
				struct lph b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	//for (int i = 0; i < 52; i++) printf("%c %d ", a[i].alphabet, a[i].count);
	//printf("\n");
	return a[0].alphabet + a[1].alphabet + a[2].alphabet;
}
int main(void) {

	char str[101];
	scanf("%s", str);
	printf("%d", mystery(str));
	return 0;
}
#endif

#if 0
//1537
void mystery(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
int main(void) {

	int a, b;
	scanf("%d %d", &a, &b);

	mystery(&a, &b);

	printf("%d %d", a, b);

	return 0;
}
#endif

#if 1

#endif
