#!/usr/bin/python3
"""module of island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the
    island described in grid
    """
    if len(grid) == 0 or len(grid[0]) == 0:
        return
    len_col = len(grid[0])
    len_row = len(grid)
    if len_row > 100 or len_col > 100:
        return
    count = 0
    for i in range(len_row):
        for j in range(len_col):
            if grid[i][j] == 1:
                count += 4
                if i > 0 and grid[i - 1][j] == 1:
                    count -= 2
                if j > 0 and grid[i][j - 1]:
                    count -= 2
    return count
