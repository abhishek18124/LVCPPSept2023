#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

// time : O(n)
// space : O(n) due to the stack

vector<int> asteroidCollision(const vector<int>& asteroids) {

	stack<int> s;

	for (int ast : asteroids) {
		if (ast < 0 and !s.empty() and s.top() > 0) {
			// collision will happen
			bool flag = true; // assume 'ast' will survive all the collisions
			while (!s.empty() and s.top() > 0) {
				// collision will keep happening
				if (abs(ast) > s.top()) {
					// the asteroid at the top of the stack will be destroyed
					s.pop();
				} else if (abs(ast) < s.top()) {
					// 'ast' wil be destroyed
					flag = false;
					break;
				} else { // abs(ast) == s.top()
					// both 'ast' and s.top() will be destroyed
					flag = false;
					s.pop();
					break;
				}
			}
			if (flag == true) {
				s.push(ast);
			}

		} else {
			// no collision will happen
			s.push(ast);
		}
	}

	vector<int> v; // to track the final state after all the collisions

	while (!s.empty()) {
		v.push_back(s.top());
		s.pop();
	}

	reverse(v.begin(), v.end());

	return v;

}

int main() {

	vector<int> asteroids = {7, 3, -4, 5, 2, -8, 2, 4, 1, -4};

	vector<int> v = asteroidCollision(asteroids);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}