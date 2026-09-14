class Solution {
private: 
    int m, n;
    void dfs(vector<vector<int>>& image, int r, int c, int orig, int color){
        if (r < 0 || c < 0 || r >= m || c >= n || image[r][c] != orig) return;
        image [r][c] = color;
        dfs(image, r + 1, c, orig, color);
        dfs(image, r - 1, c, orig, color);
        dfs(image, r, c + 1, orig, color);
        dfs(image, r, c - 1, orig, color);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orig = image[sr][sc];
        if (orig == color) return image;
        m = image.size();
        n = image[0].size();
        dfs(image, sr, sc, orig, color);
        return image;
    }
};