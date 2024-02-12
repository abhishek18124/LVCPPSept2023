#include<iostream>
#include<stack>

using namespace std;

class custom_stack {

	stack<int> main_stack;
	stack<int> min_stack;

	public : 

		void push(int data) {
			
		}

		void pop() {
			
		}

		int size() {
			
		}

		bool empty() {
			
		}

		int top() {
			
		}

		int minTop() {
			
		}

};

int main() {

	custom_stack cs;

	// todo : push data

	cout << "top : " << cs.top() << endl;
	cout << "minTop : " << cs.minTop() << endl;

	cs.pop();

	return 0;
}
