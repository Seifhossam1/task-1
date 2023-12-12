
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

#define ROW 5
#define COL 5

// Direction vectors
int dRow[] = {-1, 0, 0, 1};
int dCol[] = {0, 1, -1, 0};

// Function to check if a cell is be visited or not
bool isValid(bool vis[][COL], int row, int col)
{
    // If cell lies out of bounds
    if (row < 0 || col < 0 || row >= ROW || col >= COL)
        return false;

    // If cell is already visited
    if (vis[row][col])
        return false;

    // Otherwise
    return true;
}

// Function to perform the BFS traversal
void BFS(int grid[][COL], bool vis[][COL], int startRow, int startCol, int goalRow, int goalCol)
{
    // Stores indices of the matrix cells
    queue<pair<int, int>> q;

    // Mark the starting cell as visited and push it into the queue
    q.push({startRow, startCol});
    vis[startRow][startCol] = true;

    // Iterate while the queue is not empty
    while (!q.empty())
    {
        pair<int, int> cell = q.front();
        int x = cell.first;
        int y = cell.second;

        // Skip printing if the value is -1
        if (grid[x][y] != -1)
            cout << grid[x][y] << " ";

        q.pop();

        // Check if the goal is reached
        if (x == goalRow && y == goalCol)
        {
            cout << "\nGoal reached!\n";
            return;
        }

        // Go to the adjacent cells
        for (int i = 0; i < 4; i++)
        {
            int adjx = x + dRow[i];
            int adjy = y + dCol[i];

            if (isValid(vis, adjx, adjy))
            {
                q.push({adjx, adjy});
                vis[adjx][adjy] = true;
            }
        }
    }

    cout << "\nGoal not reached!\n";
}

// Driver Code
int main()
{
    // Given input matrix
    int grid[ROW][COL] = {
        {1, 2, 3, -1, -1},
        {-1, 7, 8, 9, 10},
        {-1, 12, 13, 14, 15},
        {-1, 17, 18, 19, 20},
        {-1, 22, 23, -1, -1}};

    // Declare the visited array
    bool vis[ROW][COL];
    memset(vis, false, sizeof vis);

    // Specify the start and goal points
    int startRow = 3, startCol = 2;
    int goalRow = 1, goalCol = 4;

    BFS(grid, vis, startRow, startCol, goalRow, goalCol);

    return 0;
}