/**
 * created by : cidi mohamed mostepha
 * link :https://leetcode.com/problems/number-of-islands
 * Difficulty : Medium
 */

class Solution
{
public:
    vector<vector<int>> vis;
    int n, m;

    void dfs(int x, int y, vector<vector<char>> &grid)
    {
        if (vis[x][y])
        {
            return;
        }

        vis[x][y] = 1;

        if (x - 1 > -1 && x - 1 < n)
        {
            if (grid[x - 1][y] == '1')
            {
                dfs(x - 1, y, grid);
            }
        }

        if (x + 1 > -1 && x + 1 < n)
        {
            if (grid[x + 1][y] == '1')
            {
                dfs(x + 1, y, grid);
            }
        }

        if (y - 1 > -1 && y - 1 < m)
        {
            if (grid[x][y - 1] == '1')
            {
                dfs(x, y - 1, grid);
            }
        }

        if (y + 1 > -1 && y + 1 < m)
        {
            if (grid[x][y + 1] == '1')
            {
                dfs(x, y + 1, grid);
            }
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {

        vis.resize(grid.size());
        n = grid.size();

        for (int i = 0; i < grid.size(); i++)
        {
            m = grid[i].size();
            vis[i].resize(grid[i].size(), 0);
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    if (vis[i][j])
                    {
                        continue;
                    }
                    else
                    {
                        ans++;
                        dfs(i, j, grid);
                    }
                }
            }
        }

        return ans;
    }
};