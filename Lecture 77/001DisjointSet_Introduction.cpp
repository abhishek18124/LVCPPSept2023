/*

	Implementation of the disjoint set union data structure.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

template <typename T>
class disjointSet {

	unordered_map<T, T> parentMap; // to store a mapping b/w vertices & their parents

public :

	// time : O(1)

	void createSet(T x) {
		parentMap[x] = x; // const. op
	}

	// time : O(hgt of the tree that contains x)

	T findSet(T x) {

		// base case

		if (parentMap[x] == x) {
			return x;
		}

		// recursive case

		T px = parentMap[x];
		return findSet(px);

	}


	// time : O(hgt of the tree that contains x and y)

	void unionSet(T x, T y) {

		T lx = findSet(x);
		T ly = findSet(y);

		if (lx != ly) {

			// perform the union op. b/w the two sets

			parentMap[ly] = lx;

		}

	}

};

int main() {

	disjointSet<int> ds;

	ds.createSet(1);
	ds.createSet(2);
	ds.createSet(3);
	ds.createSet(4);

	ds.unionSet(2, 3);

	cout << ds.findSet(3) << endl;

	ds.unionSet(1, 4);

	cout << ds.findSet(4) << endl;

	ds.unionSet(3, 4);

	cout << ds.findSet(2) << endl;

	return 0;
}