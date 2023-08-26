#!/usr/bin/python3
""" A module that find the perimeter of the island """


def island_perimeter(grid):
    """
        A function that calculate the perimeter of an island
        Args:
            grid: a list of integer where 0 represent water zone
                and 1 represent Land Zone
    """
    if grid is [] and (len(grid) > 100 or len(grid) == 0):
        return
    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                per += 4
                if j > 0 and grid[i][j-1] == 1:
                    per -= 2
                if i > 0 and grid[i-1][j] == 1:
                    per -= 2
    return per
