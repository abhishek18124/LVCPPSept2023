#include<iostream>
#include<vector>

using namespace std;

int add1(int y) {
	return 1 + y;
}

int add2(int y) {
	return 2 + y;
}

int add3(int y) {
	return 3 + y;
}

class addx {
public:
	int x;
	addx(int x) {
		this->x = x;
	}

	int operator()(int y) {
		return x + y;
	}
};

int main() {

	vector<int> inp = {1, 2, 3, 4, 5};

	for (int i = 0; i < inp.size(); i++) {
		cout << inp[i] << " ";
	}

	cout << endl;

	vector<int> out(inp.size());

	// transform(inp.begin(), inp.end(), out.begin(), add1); // add1 is a function pointer

	// transform(inp.begin(), inp.end(), out.begin(), addx(1)); // add1 is a function pointer

	addx obj(1);
	transform(inp.begin(), inp.end(), out.begin(), obj); // add1 is a function pointer

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;

	// transform(inp.begin(), inp.end(), out.begin(), add2); // add2 is a function pointer
	transform(inp.begin(), inp.end(), out.begin(), addx(2)); // add2 is a function pointer

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;

	// transform(inp.begin(), inp.end(), out.begin(), add3); // add3 is a function pointer
	transform(inp.begin(), inp.end(), out.begin(), addx(3)); // add3 is a function pointer

	for (int i = 0; i < out.size(); i++) {
		cout << out[i] << " ";
	}

	cout << endl;



	return 0;
}