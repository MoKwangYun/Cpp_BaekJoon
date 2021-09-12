#include<iostream>

using namespace std;

void hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
        printf("%d %d\n", start, to);
    else
    {
        hanoi(n - 1, start, bypass, to);
        printf("%d %d\n", start, to);
        hanoi(n - 1, bypass, to, start);
    }
}

int main() {
	int N;
	cin >> N;
	cout << (1<< N) - 1 << endl;

    hanoi(N, 1, 3, 2);
	return 0;


}