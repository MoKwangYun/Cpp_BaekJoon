#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	int num;
	cin >> num;

	/*int q = 0;
	for (int i = 0; i <= 6; i++) {
		int t = pow(10, i);
		if ((num / t) == 0) {
			q = i;
			break;
		}

	}

	for (int i = 1; i <= num; i++) {
		int temp = i;
		int min = 0;

		for (int j = 1; j <= q; j++) {
			int t = pow(10, j);
			int t2 = pow(10, j - 1);
			min += (temp % t) / t2;

		}

		min += i;

		
		if (num == min) {

			printf("%d", i);
			
			return 0;
		}
			

	}*/
	int sum;
	for (int i = 0; i <= num; i++) {
		sum = i;
		int temp = i;

		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == num) {
			cout << i << "\n";
			return 0;
		}
	}

	cout << 0 <<"\n";
	return 0;
}