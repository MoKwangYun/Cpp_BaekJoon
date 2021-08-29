#include<iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX] = {};
bool visit[MAX] = {};

void dfs(int count) {

	if (count == m) {

		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int j = 1; j <= n; j++) {

		if (!visit[j]) {
			visit[j] = true;
			arr[count] = j;
			dfs(count + 1);
			visit[j] = false;
		}

	}
}

int main() {

	cin >> n >> m;

	dfs(0);

}

//https://cryptosalamander.tistory.com/54
