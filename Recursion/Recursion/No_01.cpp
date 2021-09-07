#include<iostream>

using namespace std;

int fac(int n) {

	if (n == 0) {
		return 1;
	}
	else {

		int num = n * fac(n - 1);

		return num;
	}
}

int main() {
	int N;
	cin >> N;

	cout << fac(N) << endl;

	return 0;
}