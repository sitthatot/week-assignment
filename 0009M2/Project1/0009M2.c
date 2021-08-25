#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n[3], temp;
	char input[5];
	for (int l = 0; l < 3; l++) {
		scanf("%d ", &n[l]);
	}
	scanf("%s", input);
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (n[i] > n[j]) {
				temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
	for (int c = 0; c < 3; c++) {
		if (input[c] == 'A')printf("%d ", n[0]);
		else if (input[c] == 'B')printf("%d ", n[1]);
		else if (input[c] == 'C')printf("%d ", n[2]);
	}
	return 0;
}
