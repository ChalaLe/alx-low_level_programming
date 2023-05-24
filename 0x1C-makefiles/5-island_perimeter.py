#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.

    Returns:
        The perimeter of the island defined in grid.
    """
    # Get the width and height of the grid
    width = len(grid[0])
    height = len(grid)

    # Initialize variables to track edges and size of the island
    edges = 0
    size = 0

    # Iterate over each cell in the grid
    for i in range(height):
        for j in range(width):
            # If a land cell is encountered
            if grid[i][j] == 1:
                # Increment the size of the island
                size += 1

                # Check left neighbor cell
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1

                # Check above neighbor cell
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    # Calculate the perimeter
    perimeter = size * 4 - edges * 2

    # Return the perimeter of the island
    return perimeter
