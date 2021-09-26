#include<iostream>

using namespace std;


int main() {
	int N;
	cin >> N;

	int* arr = new int[N] {};

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N - 1; i++) {
		int minIndex = i;
		for (int j = i; j < N - 1; j++) {
			if (arr[minIndex] > arr[j + 1])
				minIndex = j + 1;
		}

		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
		
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	delete[] arr;
	return 0;
}

