#!/usr/bin/python3
"""
perimeter.py - Island Perimeter Calculation

This module provides a function for calculating the perimeter
of an island based on a grid. The grid represents a 2D area with
cells, where 0 represents water zones and 1 represents land zones.
Each cell is treated as a square with a side length of 1. Grid cells
are connected only horizontally/vertically, not diagonally.

Functions:
    - island_perimeter(grid): Calculate the perimeter of the
    island in the provided grid.
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island described in a grid.
    The function computes the perimeter of an island based on the
    grid provided. It assumes that 0 represents a water zone and 1
    represents a land zone. Each cell is considered as a square with a
    side length of 1. Grid cells are connected horizontally/vertically
    (not diagonally).

    Args:
    grid (list of list of int): A grid where 0 represents water
    and 1 represents land.

    Returns:
    int: The perimeter of the island.

    Example:
    >>> grid = [
    ...    [0, 0, 0, 0, 0, 0],
    ...    [0, 1, 1, 0, 0, 0],
    ...    [0, 1, 1, 0, 0, 0],
    ...    [0, 1, 1, 1, 0, 0],
    ...    [0, 0, 0, 0, 0, 0]
    ... ]
    >>> island_perimeter(grid)
    22
    """

    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
