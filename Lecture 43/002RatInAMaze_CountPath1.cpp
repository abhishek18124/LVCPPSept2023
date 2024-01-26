/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to

	> check if there exists a path from src to dst

such at each step the rat can only move in the right or down direction.

Constraint

 1 <= m, n < 10

Example
	Input :

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}

	Output :

		true (Yes, a path exist from src to dst)

*/

#include<iostream>

using namespace std;

int cnt = 0; // to track no. of paths to go from (0, 0)th cell to (m-1, n-1)th cell

bool f(char maze[][10], int m, int n, int i, int j) {

	// base case

	if (i == m || j == n) {

		// you've gone outside the maze

		return false; // no path exists to reach (m-1, n-1)th cell

	}

	if (maze[i][j] == 'X') {

		// you've reached a blocked cell

		return false;

	}

	if (i == m - 1 and j == n - 1) {

		// you've reached the destination

		cnt++; // you've found a path

		return true; // 100% destination cell isn't blocked

	}

	// recursive case

	// can the rat go from (i, j)th cell to (m-1, n-1)th cell ?

	// or

	// does there exist a path from (i, j)th cell to (m-1, n-1)th cell ?

	// decide the next step

	// 1. move right

	bool x = f(maze, m, n, i, j + 1);

	// 2. move down

	bool y = f(maze, m, n, i + 1, j);

	return x or y;

}

int main() {

	char maze[][10] = {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	int m = 4;
	int n = 4;

	f(maze, m, n, 0, 0) ? cout << "path exists" << endl : cout << "path does not exist" << endl;

	cout << cnt << endl;

	return 0;
}