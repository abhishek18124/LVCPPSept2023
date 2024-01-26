#include<iostream>

using namespace std;

void print(char path[][10], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << path[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


void f(char maze[][10], char path[][10], int m, int n, int i, int j) {

	// base case

	if (i == -1 || i == m || j == -1 || j == n) {
		// you've gone outside the maze
		return;
	}

	if (maze[i][j] == 'X') {
		// you've reached a blocked cell
		return;
	}

	if (i == m - 1 and j == n - 1) {
		// you've reached the destination cell which is not blocked i.e. you've found a path
		path[i][j] = '1';
		print(path, m, n);
		path[i][j] = '0';
		return;
	}

	// recursive case

	path[i][j] = '1';
	maze[i][j] = 'X'; // block the (i, j)th cell after you've included it in the path

	f(maze, path, m, n, i, j + 1);
	f(maze, path, m, n, i, j - 1);
	f(maze, path, m, n, i - 1, j);
	f(maze, path, m, n, i + 1, j);

	path[i][j] = '0'; // backtracking
	maze[i][j] = '0'; // unblock the (i, j)th cell so that it can be used for other paths

}

int main() {

	char maze[][10] = {
		"0X00",
		"000X",
		"X0X0",
		"X00X",
		"XX00"
	};

	char path[][10] = {
		"0000",
		"0000",
		"0000",
		"0000",
		"0000"
	};

	int m = 5;
	int n = 4;

	f(maze, path, m, n, 0, 0);

	return 0;
}
