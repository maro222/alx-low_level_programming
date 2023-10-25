#!/usr/bin/python3
"""Module for technical interview """


def islandPerimeter(grid):
    """ function def island_perimeter(grid):
    that returns the perimeter of the island described in grid
    leetcode 463 island perimeter"""
    sum = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                sum = sum + 4
                if i != 0 and grid[i - 1][j] == 1:
                    sum = sum - 2
                if j != 0 and grid[i][j - 1] == 1:
                    sum = sum - 2
    return (sum)
