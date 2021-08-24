#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main() {
	
		/* 문제_01
		char a;
		cin >> a;
		
		
		printf("%d", a);*/

		int a;
		cin >> a;

		cin.ignore(); 
		/*
		a를 입력하고 엔터를 누르기 때문에 버퍼에 엔터가 남아있다
		하지만 아래 getline은 엔터를 인식하는 순간 입력을 종료받기 때문에 
		현재 버퍼에 존재하는 엔터를 cin.ignore()를 통해 지워줘야 한다
		
		*/
		string arr = {};
		getline(cin, arr);

		if (arr.size() != a) {
			cout << "입력받은 숫자 개수와 다릅니다." << endl;
			return 0;
		}
		int arrayInt[100] = {};
		
		int max = 0;

		for (int i = 0; i < arr.size(); i++) {
			string s = arr.substr(i, 1);
			const char* temp = s.c_str();

			arrayInt[i] = (int)(*temp) - (int)('0');
			max += arrayInt[i];
		}

		cout << max << endl;
		

		//.c_str() 예시
	string s = "abcd";
	const char* ss = s.c_str();

	cout << ss << endl; //abcd 출력
	cout << *ss << endl; //a 출력
}