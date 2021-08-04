#include<stdio.h>

int d(int num) {
	for (int j = 1; j < num; j++) {
		int q1 = j / 10000;
		int q2 = (j % 10000) / 1000;
		int q3 = (j % 1000) / 100;
		int q4 = (j % 100) / 10;
		int r = j % 10;

		if (num == j + q1 + q2 + q3 + q4 + r) {
			return 0;
		}

		
	}

	return num;
}
int main() {
	for (int i = 1; i < 10000; i++) {
		if (d(i) != 0) {
			printf("%d \n", d(i));
		}
	}
}