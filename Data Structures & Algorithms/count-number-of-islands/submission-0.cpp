class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
private: 
    int m, n;
    void dfs(vector<vector<char>>& grid, int r, int c){
        if (r < 0 || r >= m || c < 0 || c >= n || grid[r][c] == '0') return;
        grid[r][c] = '0';
        for (int i = 0; i < 4; i++){
            dfs(grid, r + directions[i][0], c + directions[i][1]);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;

        for (int r = 0; r < m; r++){
            for (int c = 0; c < n; c++){
                if (grid[r][c] == '1'){
                    dfs(grid, r, c);
                    count++;
                }
            }
        }
        return count;
    }
};
