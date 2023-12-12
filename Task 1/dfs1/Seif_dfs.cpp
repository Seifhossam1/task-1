#include <bits/stdc++.h>
using namespace std;

#define ROW 5
#define COL 5

// Direction vectors
int dRow[] = {-1, 0, 0, 1};  // Up, Right, Left, Down
int dCol[] = {0, 1, -1, 0};

bool isValid(bool vis[][COL], int row, int col, vector<vector<int>>& grid)
{
    // If cell lies out of bounds or is an obstacle
    if (row < 0 || col < 0 || row >= ROW || col >= COL || grid[row][col] == -1)
        return false;

    // If cell is already visited
    if (vis[row][col])
        return false;

    // Otherwise
    return true;
}

// Function to perform the DFS traversal with priority
bool DFS(vector<vector<int>>& grid, bool vis[][COL], int x, int y, int goalRow, int goalCol)
{
    // Check if the current cell is the goal
    if (x == goalRow && y == goalCol) {
        cout << grid[x][y] << " ";  // Print the goal cell
        return true;
    }

    cout << grid[x][y] << " ";

    vis[x][y] = true;

    // Go to the adjacent cells with priority based on Manhattan distance
    for (int i = 0; i < 4; i++) {
        int adjx = x + dRow[i];
        int adjy = y + dCol[i];

        if (isValid(vis, adjx, adjy, grid)) {
            if (DFS(grid, vis, adjx, adjy, goalRow, goalCol)) {
                return true;  // Stop when the goal is reached
            }
        }
    }

    return false;  // Goal not reached in this path
}

// Driver Code
int main()
{
    // Given input matrix with obstacles represented by -1
    vector<vector<int>> grid = {
        {1, 2, 3, -1, -1},
        {-1, 7, 8, 9, 10},
        {-1, 12, 13, 14, 15},
        {-1, 17, 18, 19, 20},
        {-1, 22, 23, -1, -1}
    };

    // Declare the visited array
    bool vis[ROW][COL];
    memset(vis, false, sizeof vis);

    // Define start and goal points
    int startRow = 3, startCol = 2;
    int goalRow = 1, goalCol = 4;

    DFS(grid, vis, startRow, startCol, goalRow, goalCol);

    return 0;
}