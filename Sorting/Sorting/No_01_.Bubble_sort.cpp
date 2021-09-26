#include<iostream>

using namespace std;


int main(){
	int N;
	cin >> N;

	int* arr = new int[N]{};
	
	for(int i = 0; i < N; i++){
		cin >> arr[i];	
	}

	for(int j = N - 1; j > 0; j--){

		for(int i = 0; i < j; i++){

			if(arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	
	}

	for(int i = 0; i < N; i++){
		printf("%d\n", arr[i]);
	}

	delete[] arr;
	return 0;
}

