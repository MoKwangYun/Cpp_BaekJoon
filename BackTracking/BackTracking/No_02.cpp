#include<iostream>

using namespace std;

int N;
int M;
int arr[9] = {0, }; // {0,} == {} == {0} == ��� ���Ҹ� �ش� Ÿ�Կ� �´� 0���� �ʱ�ȭ
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
//������ ���� ���� ���� 1�ε� num�� �ִ� ������ ���� ����Լ� ȣ��� 
//���� i���� ū ������ i�� �ݺ��ϱ� ����(��������!!)
			
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