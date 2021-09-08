#include<iostream>

using namespace std;

int fab(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		int num = fab(n - 1) + fab(n - 2);
		return num;
	}

}

int main() {
	int N;
	cin >> N;

	cout << fab(N);

	return 0;
}