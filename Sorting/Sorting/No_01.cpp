#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int* arr = new int[N] {};

	for (int i = 0; i < N; i++) {

		cin >> arr[i];

		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) {
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			else break;
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	delete[] arr;
	return 0;
}



