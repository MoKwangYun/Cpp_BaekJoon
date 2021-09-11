#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int x[50] = {};
	int y[50] = {};

	for (int i = 0; i < N; i++) {
		cin >> x[i];
		cin >> y[i];

	}

	int rank[50] = {};
	

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j])
				rank[i]++;
			else if (x[i] > x[j] && y[i] > y[j])
				rank[j]++;



		}
	}

	for (int i = 0; i < N; i++) {
		cout << rank[i] + 1 << " ";
	}
}