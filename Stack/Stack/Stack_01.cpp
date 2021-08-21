#include<iostream>

using namespace std;

template<typename T>
class StackNode {
private:
	StackNode():
		m_pNext(NULL)
	{

	}
	~StackNode() {

	}

private:
	template<typename T>
	friend class StackList;

private:
	T m_Data;
	StackNode<T>* m_pNext;
};

template<typename T>
class StackList {

public:
	StackList() {
		m_pBegin = new NODE;
		m_pEnd = new NODE;
		m_iSize = 0;

		m_pBegin->m_pNext = m_pEnd;

	}
	~StackList() {

	}

public:
	typedef StackNode<T> NODE;
	typedef StackNode<T>* PNODE;

public:
	PNODE m_pBegin;
	PNODE m_pEnd;
	int m_iSize;

public:
	void push(T& data) {
		PNODE m_pNode = new NODE;
		m_pNode->m_Data = data;

		PNODE NEXT = m_pBegin->m_pNext;

		m_pBegin->m_pNext = m_pNode;
		m_pNode->m_pNext = NEXT;
		
		++m_iSize;
	}

	int empty() {

		if (m_iSize == 0)
			return 1;
		else
			return 0;
	}

	T pop() {
		if (empty() == 1)
			return -1;

		PNODE m_pNode = m_pBegin->m_pNext;
		T data = m_pNode->m_Data;

		m_pBegin->m_pNext = m_pNode->m_pNext;
		delete m_pNode;

		--m_iSize;

		return data;

	}

	int size() {
		return m_iSize;
	}

	T top() {

		if (empty() == 1)
			return -1;

		T data = m_pBegin->m_pNext->m_Data;

		return data;
	}
};

int main() {

	StackList<int> stackInt;

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {

		char choice[10000] = {};
		cin >> choice;

		if (strcmp(choice, "push") == 0) {
			int j;
			cin >> j;

			stackInt.push(j);

			continue;
		}

		else if (strcmp(choice, "top") == 0) {

			cout << stackInt.top() << endl;
			
			continue;
		}

		else if (strcmp(choice, "size") == 0) {

			cout << stackInt.size() << endl;

			continue;
		}

		else if (strcmp(choice, "empty") == 0) {

			cout << stackInt.empty() << endl;

			continue;
		}

		else if (strcmp(choice, "pop") == 0) {

			cout << stackInt.pop() << endl;
		}


	}

	return 0;

}

/* 백준 제출.ver(템플릿 제거)
* 
#include<iostream>
#include<string.h>

using namespace std;

//template<typename T>
class StackNode {
private:
	StackNode():
		m_pNext(NULL)
	{

	}
	~StackNode() {

	}

private:
	//template<typename T>
	friend class StackList;

private:
	int m_Data;
	StackNode* m_pNext;
};

//template<typename T>
class StackList {

public:
	StackList() {
		m_pBegin = new NODE;
		m_pEnd = new NODE;
		m_iSize = 0;

		m_pBegin->m_pNext = m_pEnd;

	}
	~StackList() {

	}

public:
	typedef StackNode NODE;
	typedef StackNode* PNODE;

public:
	PNODE m_pBegin;
	PNODE m_pEnd;
	int m_iSize;

public:
	void push(int& data) {
		PNODE m_pNode = new NODE;
		m_pNode->m_Data = data;

		PNODE NEXT = m_pBegin->m_pNext;

		m_pBegin->m_pNext = m_pNode;
		m_pNode->m_pNext = NEXT;

		++m_iSize;
	}

	int empty() {

		if (m_iSize == 0)
			return 1;
		else
			return 0;
	}

	int pop() {
		if (empty() == 1)
			return -1;

		PNODE m_pNode = m_pBegin->m_pNext;
		int data = m_pNode->m_Data;

		m_pBegin->m_pNext = m_pNode->m_pNext;
		delete m_pNode;

		--m_iSize;

		return data;

	}

	int size() {
		return m_iSize;
	}

	int top() {

		if (empty() == 1)
			return -1;

		int data = m_pBegin->m_pNext->m_Data;

		return data;
	}
};

int main() {

	StackList stackInt;

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {

		char choice[10000] = {};
		cin >> choice;

		if (strcmp(choice, "push") == 0) {
			int j;
			cin >> j;

			stackInt.push(j);

			continue;
		}

		else if (strcmp(choice, "top") == 0) {

			cout << stackInt.top() << endl;

			continue;
		}

		else if (strcmp(choice, "size") == 0) {

			cout << stackInt.size() << endl;

			continue;
		}

		else if (strcmp(choice, "empty") == 0) {

			cout << stackInt.empty() << endl;

			continue;
		}

		else if (strcmp(choice, "pop") == 0) {

			cout << stackInt.pop() << endl;
		}


	}

	return 0;

}
*/