#!/usr/bin/python3
"""Defines an island perimeter measuring function."""
def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    H = len(grid)
    W = len(grid[0])
    def dfs(r,c):
        """searches for the island"""
        if r < 0 or r>= H or c < 0 or c >= W or grid[r][c] == 0:
            return 1
        if grid[r][c] == 1:
            grid[r][c] = 2
            return dfs(r-1, c) + dfs(r+1, c) + dfs(r, c-1) + dfs(r, c+1)
        return 0
    perimeter = 0
    for r in range(H):
        for c in range(W):
            if grid[r][c] == 1:
                perimeter += dfs(r,c)
    return perimeter
