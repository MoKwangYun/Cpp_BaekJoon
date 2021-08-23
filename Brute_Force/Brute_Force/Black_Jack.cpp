#include<iostream>

using namespace std;

int main() {
	int arr[100] = {};
	int a;
	cin >> a;

	int b;
	cin >> b;

	for (int i = 0; i < a; i++) {
		
		int c;
		cin >> c;
		
		if (c < b)
			arr[i] = c;
		else
			continue;
	}

	int max = 0;
	for (int i = 0; i < a; i++) {
		int m = 0;

		m += arr[i];
		
		for (int j = 0; j < a ; j++) {
			if (i == j)
				continue;

			m += arr[j];

			for (int k = 0; k < a; k++) {
				if (i == k || j == k)
					continue;

				m += arr[k];

				if (m > max && m <= b)
					max = m;

				m -= arr[k];
			}

			m -= arr[j];
		}


	}

	printf("%d", max);
	return 0;
}