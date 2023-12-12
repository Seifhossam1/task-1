# task-1
# Breadth-First Search (BFS)

BFS stands for Breadth-First Search, an algorithm commonly used for searching tree or graph data structures. The key characteristic of BFS is its exploration of nodes at the current depth level before moving on to nodes at the next depth level. Essentially, BFS traverses a graph level by level, visiting all the neighbors of a node before proceeding to the next set of neighbors.

## Algorithm Overview
1. Begin the algorithm at a selected node in the graph.
2. Explore the neighbors at the present depth before moving on to the next depth level.
3. Commonly employed to find the shortest path between two nodes.

## Scenario
In our scenario, we have a grid with dimensions 5x5. The start point is chosen at (3,2), and the goal point is set at (1,4). The priority directions are defined as (up, right, left, down). Obstacles are present at coordinates (1,0), (2,0), (3,0), (4,0), (0,3), (0,4), (4,3), and (4,4). The algorithm took 15 steps to reach from the start point to the goal point.
![image](https://github.com/Seifhossam1/task-1/assets/153624797/4af4a170-f7e9-4f69-9c53-4bd366336563)


# Depth-First Search (DFS)

DFS stands for Depth-First Search, an algorithm used for searching tree or graph data structures. In contrast to Breadth-First Search (BFS), DFS explores a graph or tree by delving as deeply as possible along each branch before backtracking. It starts at the root node and explores as far as possible along each branch before backtracking.

## Algorithm Overview
1. Start at the root node and explore as deeply as possible along each branch.
2. Backtrack when necessary to explore other branches.

## Scenario
In our map with a grid size of 5x5, the start point is chosen at (3,2), and the goal point is set at (1,4). The priority directions are assumed to be (up, right, left, down). Obstacles are present at coordinates (1,0), (2,0), (3,0), (4,0), (0,3), (0,4), (4,3), and (4,4). The algorithm took 12 steps to reach from the start point to the goal point.
![image](https://github.com/Seifhossam1/task-1/assets/153624797/a509e0ec-80e8-4f44-8ed6-3a1336153302)


![image](https://github.com/Seifhossam1/task-1/assets/153624797/5ec48a56-602a-4309-9b91-6e721ff06c28)



