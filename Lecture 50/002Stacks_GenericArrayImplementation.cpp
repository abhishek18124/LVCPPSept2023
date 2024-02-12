#include<iostream>

using namespace std;

template <typename T>
class stack {

	T* arr; // pointer to the array that internally represents stack
	int t;    // to store the array index of the stack top
	int n;    // to store the maximum stack capacity

public :

	stack(int n) {
		arr = new T[n];
		t = -1;
		this->n = n;
	}

	void push(T data) {
		if (t == n - 1) {
			// stack is full
			return;
		}
		t++;
		arr[t] = data;
	}

	void pop() {
		if (t == -1) {
			// stack is empty
			return;
		}
		t--;
	}

	T top() {
		return arr[t];
	}

	bool empty() {
		return t == -1;
	}

	int size() {
		return t + 1;
	}

};


int main() {

	stack<char> s(5);

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('E');

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