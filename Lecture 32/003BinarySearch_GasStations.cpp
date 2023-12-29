#include<iostream>
#include<cmath>

using namespace std;

bool isPossible(int stations[], int n, int k, double m) {

	// can the smallest value of maximum distance b/w adjacent
	// gas stations after adding 'k' new gas stations be <= m?

	int cnt = 0;

	for (int i = 0; i < n - 1; i++) {

		// int pa = stations[i];
		// int pb = stations[i + 1];
		// int d = pb - pa;

		// if (d > m) {

		// 	// add stations b/w ith and i+1th station so that dist b/w adjacent stations becomes <= m

		// 	cnt += ceil(d / m) - 1;

		// }

		int d = stations[i + 1] - stations[i];
		cnt += ceil(d / m) - 1;

	}

	return cnt <= k;

}

double minMaxDist(int stations[], int n, int k) {

	int minSoFar = 0;
	for (int i = 0; i < n - 1; i++) {
		if (stations[i + 1] - stations[i] < minSoFar) {
			minSoFar = stations[i + 1] - stations[i];
		}
	}

	double s = static_cast<double>(minSoFar) / (k + 1);
	double e = static_cast<double>(stations[n - 1] - stations[0]) / (k + 1);

	// double s = 0;
	// double e = stations[n - 1] - stations[0]; // 1e8 = 1*10^8

	double ans;

	while (e - s > 1e-6) {

		double m = s + (e - s) / 2;

		// can the smallest value of maximum distance b/w adjacent
		// gas stations after adding 'k' new gas stations be <= m?

		if (isPossible(stations, n, k, m)) {
			ans = m;
			// to futher minimize the maximum distance  b/w  adjacent stations
			// after adding 'k' new gas stations, reduce the search space from
			// [s, e] to [s, m]
			e = m;
		} else {
			// reduce the search space from [s, e] to [m, e]
			s = m;
		}
	}

	return ans;
}

int main() {

	int stations[] = {23, 24, 36, 39, 46, 56, 57, 65, 84, 98};
	int n = sizeof(stations) / sizeof(int);
	int k = 1;

	cout << minMaxDist(stations, n, k) << endl;

	return 0;
}