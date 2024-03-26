/*

    https://leetcode.com/problems/wildcard-matching/

*/

class Solution {
public:

    // bool helper(string s, string p, int m, int n, int i, int j) {

    //     // base case

    //     if (i == m) {

    //         // check if p[j...n-1] matches s[m...m-1] i.e. empty string

    //         bool flag = true; // assume p[j...n-1] contains only '*'

    //         for (int k = j; k <= n - 1; k++) {
    //             if (p[k] != '*') {
    //                 flag = false;
    //                 break;
    //             }
    //         }

    //         return flag;

    //     }

    //     if (j == n) { // i != m

    //         // check if p[n...n-1] i.e. empty pattern matches non-empty s[i...m-1]

    //         return false;

    //     }

    //     // recursive case

    //     // check p[j...n-1] matches s[i...m-1]

    //     if (p[j] == s[i]) {

    //         // recursively, check if p[j+1...n-1] matches s[i+1...m-1]

    //         return helper(s, p, m, n, i + 1, j + 1);

    //     } else {

    //         if (p[j] == '?') {

    //             // recursively, check if p[j+1...n-1] matches s[i+1...m-1]

    //             return helper(s, p, m, n, i + 1, j + 1);


    //         } else if (p[j] == '*') {

    //             // decide for '*'

    //             // option 1 : replace * with "" => recursively, check if p[j+1...n-1] matches s[i...m-1]

    //             // option 2 : replace * with >=1 characters => // recursively, check if p[j...n-1] matches s[i+1...m-1]

    //             return helper(s, p, m, n, i, j + 1) or helper(s, p, m, n, i + 1, j);

    //         } else {

    //             // p[j] is not a wildcard character

    //             return false;

    //         }

    //     }


    // }

    bool helper(string s, string p, int m, int n, int i, int j) {

        // base case

        if (i == m) {

            // check if p[j...n-1] matches s[m...m-1] i.e. empty string

            bool flag = true; // assume p[j...n-1] contains only '*'

            for (int k = j; k <= n - 1; k++) {
                if (p[k] != '*') {
                    flag = false;
                    break;
                }
            }

            return flag;

        }

        if (j == n) { // i != m

            // check if p[n...n-1] i.e. empty pattern matches non-empty s[i...m-1]

            return false;

        }

        // recursive case

        // check p[j...n-1] matches s[i...m-1]

        if (p[j] == s[i] || p[j] == '?') {

            // recursively, check if p[j+1...n-1] matches s[i+1...m-1]

            return helper(s, p, m, n, i + 1, j + 1);

        } else if (p[j] == '*') {

            // decide for '*'

            // option 1 : replace * with "" => recursively, check if p[j+1...n-1] matches s[i...m-1]

            // option 2 : replace * with >=1 characters => // recursively, check if p[j...n-1] matches s[i+1...m-1]

            return helper(s, p, m, n, i, j + 1) or helper(s, p, m, n, i + 1, j);

        } else {

            // p[j] is not a wildcard character

            return false;

        }


    }

    bool helperBottomUp(string s, string p, int m, int n) {

        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1));

        // i == m s[] is empty

        for (int j = 0; j <= n; j++) {

            bool flag = true; // assume p[j...n-1] contains only '*'

            for (int k = j; k <= n - 1; k++) {

                if (p[k] != '*') {

                    flag = false;
                    break;

                }

            }

            dp[m][j] = flag;
        }

        // i != m and j == n // s[] is non-empty but p[] is empty

        for (int i = 0; i < m; i++) {

            dp[i][n] = false;

        }

        // dp[m][n] = true; not required since i < m

        for (int i = m - 1; i >= 0; i--) {

            for (int j = n - 1; j >= 0; j--) {

                // dp[i][j] = f(i, j)

                // check p[j...n-1] matches s[i...m-1]

                if (p[j] == s[i] || p[j] == '?') {

                    dp[i][j] = dp[i + 1][j + 1];

                } else if (p[j] == '*') {

                    // decide for '*'

                    // option 1 : replace * with "" => recursively, check if p[j+1...n-1] matches s[i...m-1]

                    // option 2 : replace * with >=1 characters => // recursively, check if p[j...n-1] matches s[i+1...m-1]

                    dp[i][j] = dp[i][j + 1] or dp[i + 1][j];

                } else {

                    // p[j] is not a wildcard character

                    dp[i][j] = false;

                }

            }

        }

        return dp[0][0]; // at the (0, 0)th index of dp[][] we store f(0, 0)

    }




    bool isMatch(string s, string p) {

        int m = s.size();
        int n = p.size();

        // return helper(s, p, m, n, 0, 0);

        return helperBottomUp(s, p, m, n);

    }
};