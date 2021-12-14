#!/usr/bin/python3
"""Island Perimeter function"""


def island_perimeter(grid):
    """
    Function returns perimeter of island described in grid
    grid: (is list of lists (int))
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    h_r = len(grid)
    v_c = len(grid[0])

    for i in range(h_r):
        for j in range(v_c):
            if grid[i][j] == 1:
                if i == h_r - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == v_c - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
    return perimeter
