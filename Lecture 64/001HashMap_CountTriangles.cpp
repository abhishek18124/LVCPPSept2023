/*
	Given N cartesian points in a 2D plane, count the number of right-angled triangles that
	can be formed such that the base or perpendicular is parallel to the x-axis or y-axis.

	Examples

	Input : {(0, 0),
	         (2, 0),
	         (0, 1)}

	Output: 1

	Input : {(1, 2),
			 (2, 0),
			 (2, 2),
			 (2, 3),
			 (4, 2)}

	Output: 4
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Point {
public:
	int x;
	int y;

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int main() {

	vector<Point> points = {
		Point(1, 2),
		Point(2, 0),
		Point(2, 2),
		Point(2, 3),
		Point(4, 2)
	};

	unordered_map<int, int> xFreqMap;
	unordered_map<int, int> yFreqMap;

	for (Point p : points) {

		xFreqMap[p.x]++; // const. op
		yFreqMap[p.y]++; // const. op

	}

	int cnt = 0;

	// time : O(n^2)

	// time : O(n) using xFreqMap and yFreqMap space : O(n) due to xFreqMap & yFreqMap

	for (Point p : points) {

		// with 'p' as pivot, count the no. of right angled triangles around it

		// 1. find the no. of points in the 2D plane whose x-coor matches p.x

		// 2. find the no. of points in the 2D plane whose y-coor matches p.y

		// int a = 0; // tracks the no. of points in the 2D plane whoes x-coor matches p.x
		// int b = 0; // tracks the no. of points in the 2D plane whoes y-coor matches p.y

		// for (Point pp : points) {

		// 	if (pp.x == p.x) {
		// 		a++;
		// 	}

		// 	if (pp.y == p.y) {
		// 		b++;
		// 	}

		// }

		int a = xFreqMap[p.x]; // const op.
		int b = yFreqMap[p.y]; // const op.

		cnt += (a - 1) * (b - 1);

	}

	cout << cnt << endl;

	return 0;
}