 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_moves(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    // base case: last column
    for (int i = 0; i < m; i++) {
        dp[i][n-1] = 1;
    }

    // dynamic programming
    for (int j = n-2; j >= 0; j--) {
        for (int i = 0; i < m; i++) {
            if (i > 0 && grid[i][j] < grid[i-1][j+1]) {
                dp[i][j] = max(dp[i][j], 1 + dp[i-1][j+1]);
            }
            if (grid[i][j] < grid[i][j+1]) {
                dp[i][j] = max(dp[i][j], 1 + dp[i][j+1]);
            }
            if (i < m-1 && grid[i][j] < grid[i+1][j+1]) {
                dp[i][j] = max(dp[i][j], 1 + dp[i+1][j+1]);
            }
        }
    }

    // find maximum value in first column
    int max_moves = 0;
    for (int i = 0; i < m; i++) {
        max_moves = max(max_moves, dp[i][0]);
    }

    return max_moves;
}

int main() {
    vector<vector<int>> grid = {{2,4,3,5},{5,4,9,3},{3,4,2,11},{10,9,13,15}};
    cout << max_moves(grid) << endl; // expected output: 3
    return 0;
}
