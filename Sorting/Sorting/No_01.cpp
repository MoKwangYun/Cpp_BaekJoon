#include<iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {
	int N;
	cin >> N;

	int arr[1000] = {};

	for (int i = 0; i < N; i++) {
		//scanf_s("%d", &arr[i]);

		cin >> arr[i];

		for (int j = i; j >= 0; j--) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}