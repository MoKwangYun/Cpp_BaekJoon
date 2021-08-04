#include<stdio.h>

int main() {
	int count;
	scanf_s("%d", &count);
	int max = -10000001;
	int min = 1000001;
	int ran;
	for (int i = 1; i <= count; i++) {
		
		scanf_s("%d", &ran);
		if (ran > max) {
			max = ran;
			
		}
		if(ran < min) {
			min = ran;
		}
	}

	printf("%d  %d", min, max);

	return 0;
}