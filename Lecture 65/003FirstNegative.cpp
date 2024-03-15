#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

	int arr[] = {-2, 0, -1, 2, -3, 1, 3};
	int n = sizeof(arr) / sizeof(int);
	int k = 3;

	int i = 0;     // to store the start of the window
	int j = 0;     // to store the end of the window
	queue<int>  q; // to store negative numbers in a window
	vector<int> v; // to store first negative number for each k-sized window

	// find the first negative number in the 1st window
	
	// todo...

	// find the first negative number in the remaining windows
	
	// todo...
	
	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}

