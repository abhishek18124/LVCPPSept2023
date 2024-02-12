#include<iostream>
#include<list>

using namespace std;

template <typename T>
class stack {

	list<T> dll; // assume the back of the dll to work as the top of the stack

public :

	void push(T data) {
		dll.push_back(data);
	}

	void pop() {
		if (empty()) {
			// stack is empty
			return;
		}
		dll.pop_back();
	}

	int size() {
		return dll.size();
	}

	T top() {
		return dll.back();
	}

	bool empty() {
		return dll.empty();
	}

};

int main() {

	stack<int> s;

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}