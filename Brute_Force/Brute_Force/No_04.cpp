#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include<algorithm>
//#include<conio.h>

// 1018번과는 조금 다른 풀이 --> 8 * 8 크기 체스판 고려 않고 BW 번갈아 배치되도록 
//하는 최소 변경 횟수를 구함

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

	char arr_copy[50][50];

	copy(&arr[0][0], &arr[0][0] + (N * M), &arr_copy[0][0]);
	int count = 0;
	int count1 = 0;

	if (arr[0][0] != 'B')
		count++;
	arr[0][0] = 'B';

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
								
			if (j == 0) {

				if (i != 0){

					if (arr[i - 1][j] == 'W' && arr[i-1][j] == arr[i][j]) {
						arr[i][j] = 'B';
						count++;
					}
					else if (arr[i - 1][j] == 'B' && arr[i - 1][j] == arr[i][j]) {
						arr[i][j] = 'W';
						count++;
					}
				}
			}

			else {
				if (arr[i][j - 1] == 'W' && arr[i - 1][j] == arr[i][j]) {
					arr[i][j] = 'B';
					count++;
				}
				else if (arr[i][j - 1] == 'B' && arr[i - 1][j] == arr[i][j]) {
					arr[i][j] = 'W';
					count++;
				}
			}

				
		}
	}
		
	/*	for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << arr[i][j] ;
			}
			
		}*/

		if (arr_copy[0][0] != 'W')
			count1++;
		arr_copy[0][0] = 'W';

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {

				if (j == 0) {

					if (i != 0) {

						if (arr_copy[i - 1][j] == 'W' && arr_copy[i - 1][j] == arr_copy[i][j]) {
							arr_copy[i][j] = 'B';
							count1++;
						}
						else if (arr_copy[i - 1][j] == 'B' && arr_copy[i - 1][j] == arr_copy[i][j]) {
							arr_copy[i][j] = 'W';
							count1++;
						}
					}
				}

				else {
					if (arr_copy[i][j - 1] == 'W' && arr_copy[i - 1][j] == arr_copy[i][j]) {
						arr_copy[i][j] = 'B';
						count1++;
					}
					else if (arr_copy[i][j - 1] == 'B' && arr_copy[i - 1][j] == arr_copy[i][j]) {
						arr_copy[i][j] = 'W';
						count1++;
					}
				}
			}
		}

		if (count > count1)
			cout << count1;
		else
			cout << count;

}