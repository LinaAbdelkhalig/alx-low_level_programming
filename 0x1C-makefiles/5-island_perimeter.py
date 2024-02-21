#!/usr/bin/python3
"""defines an island perimeter measuring function"""


def island_perimeter(grid):
    """return the perimeter of an island
    water = 0, land = 1
    Args:
        grid (list): intergers representing an island.
    Returns:
        the island perimeter
    """
    land = 0
    adjacent = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1
                if i > 0 and grid[i - 1][j] == 1:
                    adjacent += 1
                if j > 0 and grid[i][j - 1] == 1:
                    adjacent += 1
    return 4 * land - 2 * adjacent
