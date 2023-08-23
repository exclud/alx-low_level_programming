#!/usr/bin/python3
"""Definition of island_perimeter"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    grid (List[List[int]]): The grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4  # Count the base perimeter

                # Check neighboring cells
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract top neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract left neighbor

    return perimeter
