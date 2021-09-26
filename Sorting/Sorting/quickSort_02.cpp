#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#define SWAP(x, y, temp) ((temp) = (x), (x) = (y), (y) = (temp))

using namespace std;

int participation(int arr[], int left, int right) {

	int low = left;
	int high = right + 1;
	int pivot = arr[left];
	int temp;

	do {
		do {
			low++;
		} while (arr[low] < pivot && low <= right);
	
		do {
			high--;
		} while (arr[high] > pivot && high >= left);

		if (low < high) {
			SWAP(arr[low], arr[high], temp);
		}
	} while (low < high);

	SWAP(arr[left], arr[high], temp);

	return high;
}

void quickSort(int arr[], int left, int right) {

	if (left < right) {

		int q = participation(arr, left, right);

		quickSort(arr, left, q - 1);
		quickSort(arr, q + 1, right);
	}
}

int main() {
	int N;
	scanf("%d",&N);

	int* arr = new int[N]{};
	for (int i = 0; i < N; i++) {
		scanf("%d",&arr[i]);
	}

	quickSort(arr, 0, N - 1);


	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;

}