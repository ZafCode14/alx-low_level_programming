#!/usr/bin/python3
"""This module contains a function"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    result = size * 4 - edges * 2

    return result
