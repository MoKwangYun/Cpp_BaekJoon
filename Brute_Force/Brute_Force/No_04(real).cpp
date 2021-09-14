#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include<algorithm>
using namespace std;

int main() {
	char arr[50][50] = {};
	int N, M;
	cin >> N;
	cin >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			//scanf(" %c", &arr[i][j]) ;
			cin >> arr[i][j];
		}
	}

	char arr_copy[50][50] = {};
	char arr_copy1[50][50] = {};

	copy(&arr[0][0], &arr[0][0] + (N * M), &arr_copy[0][0]);

	
	int count_min = N * M;


	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			int count2 = 0;

			

			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {

					if ((k + l) % 2 == 0) {

						if (arr[k][l] != 'W')
							count2++;
					}
					else {
						if (arr[k][l] != 'B')
							count2++;
					}

					if (count2 > count_min)
						break;

				}
			}
			if (count_min > count2)
				count_min = count2;
		}
	}

	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			int count1 = 0;



			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {

					if ((k + l) % 2 == 0) {

						if (arr[k][l] != 'B')
							count1++;
					}
					else {
						if (arr[k][l] != 'W')
							count1++;
					}

					if (count1 > count_min)
						break;

				}
			}
			if (count_min > count1)
				count_min = count1;

		}
	}

	cout << count_min;

}