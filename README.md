# task-1
# Breadth-First Search (BFS) Overview

BFS, or Breadth-First Search, is an algorithm designed for searching tree or graph data structures. The algorithm starts at a specified node in a graph and systematically explores neighbor nodes at the present depth before progressing to nodes at the next depth level. In essence, BFS traverses a graph level by level, visiting all the neighbors of a node before moving on to the next set of neighbors.

## Usage

BFS is commonly employed to find the shortest path between two nodes. In our scenario, we utilized a grid with dimensions 5x5, selecting the start point at (3,2) and the goal point at (1,4). Priority directions were defined as (up, right, left, down), and obstacles were present at coordinates (1,0), (2,0), (3,0), (4,0), (0,3), (0,4), (4,3), and (4,4). The algorithm successfully reached the goal point, taking 15 steps from the start.
![image](https://github.com/Seifhossam1/task-1/assets/153624797/40569eaf-2223-456c-83e0-3acc04f9ba24)


# Depth-First Search (DFS) Overview

DFS, or Depth-First Search, is another algorithm designed for searching tree or graph data structures. In contrast to BFS, DFS explores a graph or tree by delving as deeply as possible along each branch before backtracking. It begins at the root node and explores as far as possible along each branch before backtracking.

## Usage

In our 5x5 grid scenario, the start point was chosen at (3,2), and the goal point at (1,4). The assumed priority directions were (up, right, left, down), and obstacles were present at coordinates (1,0), (2,0), (3,0), (4,0), (0,3), (0,4), (4,3), and (4,4). The DFS algorithm successfully reached the goal point, taking 12 steps from the start.
![image](https://github.com/Seifhossam1/task-1/assets/153624797/053a127a-65b0-4896-9a91-807c54cd383e)


![image](https://github.com/Seifhossam1/task-1/assets/153624797/2417240b-1c56-406a-9cd2-ae0a828103fe)


