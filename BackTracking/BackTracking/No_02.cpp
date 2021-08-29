#include<iostream>

using namespace std;

int N;
int M;
int arr[9] = {0, }; // {0,} == {} == {0} == 모든 원소를 해당 타입에 맞는 0으로 초기화
bool visit[9] = { };

void func(int cnt, int num) {

		
		if (cnt == M) {
			for (int i = 0; i < M; i++) {

			/*	if (arr[i] > arr[i + 1] || (i++) != M)
					return;*/

				cout << arr[i] << " ";
			}
			cout << "\n";
			return;
		}

		for(int i = num; i <= N; i++) {
//수열의 가장 작은 수가 1인데 num을 주는 이유는 다음 재귀함수 호출시 
//이전 i보다 큰 수부터 i를 반복하기 위함(오름차순!!)
			
			if (!visit[i]) {
				arr[cnt] = i;
				visit[i] = true;
				func(cnt + 1, i +1);
				visit[i] = false;

			}

		}
	
	


}

int main() {

	cin >> N >> M;
	func(0, 1);
	

	return 0;
}