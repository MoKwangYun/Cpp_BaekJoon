#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main() {
	
		/* ����_01
		char a;
		cin >> a;
		
		
		printf("%d", a);*/

		int a;
		cin >> a;

		cin.ignore(); 
		/*
		a�� �Է��ϰ� ���͸� ������ ������ ���ۿ� ���Ͱ� �����ִ�
		������ �Ʒ� getline�� ���͸� �ν��ϴ� ���� �Է��� ����ޱ� ������ 
		���� ���ۿ� �����ϴ� ���͸� cin.ignore()�� ���� ������� �Ѵ�
		
		*/
		string arr = {};
		getline(cin, arr);

		if (arr.size() != a) {
			cout << "�Է¹��� ���� ������ �ٸ��ϴ�." << endl;
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
		

		//.c_str() ����
	string s = "abcd";
	const char* ss = s.c_str();

	cout << ss << endl; //abcd ���
	cout << *ss << endl; //a ���
}