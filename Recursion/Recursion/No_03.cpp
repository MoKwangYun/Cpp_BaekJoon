#include<iostream>

using namespace std;

void func(int i, int j, int n) {

	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		cout << " ";
		return;
	}
	else if (n / 3 == 0) {// n / 3�� �ݺ��Ͽ� n�� 1�� �Ǿ��µ��� if�� ������ �������� ������
		cout << "*";
	}
	else {
		func(i, j, n / 3);
	}
}
int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			func(i, j, N);
		}
		cout << "\n";
	}

	return 0;
}