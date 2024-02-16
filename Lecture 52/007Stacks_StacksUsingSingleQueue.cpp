#include<iostream>
#include<queue>

using namespace std;

template<typename T>
class stack {
	queue<T> q;
public:
	void push(int data) {
		q.push(data);
	}

	void pop() {
		int n = size();
		while (n > 1) {
			q.push(q.front());
			q.pop();
			n--;
		}
		// the front of the queue represents the top of the stack
		q.pop();
	}

	T top() {
		int n = size();
		while (n > 1) {
			q.push(q.front());
			q.pop();
			n--;
		}
		// the front of the queue represents the top of the stack
		T ans = q.front();
		q.pop();
		q.push(ans);
		return ans;
	}

	bool empty() {
		return q.empty();
	}

	int size() {
		return q.size();
	}
};

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	cout << "size = " << s.size() << endl;

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	cout << endl;

	s.empty() ? cout << "true" << endl : cout << "false" << endl;


	return 0;
}