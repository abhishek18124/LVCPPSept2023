/*

	Implementation of the disjoint set union data structure
	by using union by rank and path compression heuristics.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

template <typename T>
class disjointSet {

	unordered_map<T, T> parentMap; // to store a mapping b/w vertices & their parents
	unordered_map<T, int> rankMap; // to store a mapping b/w vertices & their ranks

public :

	// time : O(1)

	void createSet(T x) {
		parentMap[x] = x; // const. op
		rankMap[x] == 1;
	}

	// time : on avg. O(1)

	T findSet(T x) {

		// base case

		if (parentMap[x] == x) {
			return x;
		}

		// recursive case

		T px = parentMap[x];
		return parentMap[x] = findSet(px); // path compression

	}


	// time : on avg. O(1)

	void unionSet(T x, T y) {

		T lx = findSet(x);
		T ly = findSet(y);

		if (lx != ly) {

			// perform the union op. b/w the two sets

			int rx = rankMap[lx];
			int ry = rankMap[ly];

			if (rx > ry) {

				parentMap[ly] = lx;
				rankMap[lx] += rankMap[ly];

			} else {

				parentMap[lx] = ly;
				rankMap[ly] += rankMap[lx];

			}

		}

	}

};

int main() {

	disjointSet<int> ds;

	ds.createSet(1); // {1}
	ds.createSet(2); // {2}
	ds.createSet(3); // {3}
	ds.createSet(4); // {4}

	ds.unionSet(1, 2); // {1, 2}, {3}, {4}
	ds.unionSet(2, 3); // {1, 2, 3}, {4}

	cout << ds.findSet(2) << endl;

	ds.unionSet(3, 4); // {1, 2, 3, 4}

	cout << ds.findSet(4) << endl;

	return 0;
}
