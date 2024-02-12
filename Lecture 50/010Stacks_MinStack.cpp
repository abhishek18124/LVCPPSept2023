#include<iostream>
#include<stack>

using namespace std;

// space : O(n) due to min_stack
// hw : try to solve this problem in O(1) without maintaining min_stack

class custom_stack {

	stack<int> main_stack;
	stack<int> min_stack; // in worst-case its size is proportional to the size of the main_stack

public :

	void push(int data) {
		main_stack.push(data);
		if (min_stack.empty() || data <= min_stack.top()) {
			min_stack.push(data);
		}
	}

	void pop() {
		if (empty()) {
			// stack is empty
			return;
		}
		int temp = main_stack.top();
		main_stack.pop();
		if (min_stack.top() == temp) {
			min_stack.pop();
		}
	}

	int size() {
		return main_stack.size();
	}

	bool empty() {
		return main_stack.empty(); // or min_stack.empty()
	}

	int top() {
		return main_stack.top();
	}

	int getMin() {
		return min_stack.top();
	}

};

int main() {

	custom_stack cs;

	cs.push(10);
	cs.push(0);
	cs.push(0);

	cs.pop();

	cout << "top : " << cs.top() << endl; // 0
	cout << "min : " << cs.getMin() << endl; // 0

	return 0;
}
