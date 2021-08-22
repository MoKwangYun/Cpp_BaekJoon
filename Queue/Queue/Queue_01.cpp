#include<iostream>
#include<string.h>

using namespace std;

class QNode {
private:
	QNode():
		m_pNext(NULL),
		m_pPrev(NULL)
	{

	}
	~QNode() {

	}

private:
	friend class QList;

private:
	int m_Data;
	QNode* m_pNext;
	QNode* m_pPrev;

};

class QList {
public:
	QList() {
		m_pBegin = new NODE;
		m_pEnd = new NODE;
		m_iSize = 0;

		m_pBegin->m_pNext = m_pEnd;
		m_pEnd->m_pPrev = m_pBegin;

	}
	~QList() {

	}

private:
	typedef QNode NODE;
	typedef QNode* PNODE;

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
		m_pNode->m_pPrev = m_pBegin;

		NEXT->m_pPrev = m_pNode;
		m_pNode->m_pNext = NEXT;

		++m_iSize;

	}

	int size() {
		return m_iSize;
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

		PNODE m_pNode = m_pEnd->m_pPrev;
		int data = m_pNode->m_Data;

		PNODE PREV = m_pNode->m_pPrev;

		delete m_pNode;
		m_pEnd->m_pPrev = PREV;
		PREV->m_pNext = m_pEnd;

		--m_iSize;

		return data;

	}

	int front() {
		if (empty() == 1)
			return -1;

		return m_pEnd->m_pPrev->m_Data;
	}

	int back() {
		if (empty() == 1)
			return -1;

		return m_pBegin->m_pNext->m_Data;
	}
};

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	QList qInt;

	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		char c[100] = {};
		cin >> c;

		if (strcmp(c, "push") == 0) {
			int b;
			cin >>b;
			qInt.push(b);

			continue;
		}

		else if (strcmp(c, "front") == 0) {

			printf("%d\n", qInt.front());

			continue;
		}

		else if (strcmp(c, "back") == 0) {

			printf("%d\n", qInt.back());

			continue;

		}

		else if (strcmp(c, "size") == 0) {

			printf("%d\n", qInt.size());

			continue;
		}

		else if (strcmp(c, "empty") == 0) {

			printf("%d\n", qInt.empty());

			continue;
		}

		else if (strcmp(c, "pop") == 0) {
			printf("%d\n", qInt.pop());

			continue;
		}
	}

	return 0;
}
