README 

Sandpiles

In C 

Look into JS use: 

https://thecodingtrain.com/challenges/107-sandpiles

Header Inclusions:

#include <stdio.h> and #include <stdlib.h>: These are standard C library headers for input and output functions and dynamic memory allocation, respectively.
"sandpiles.h": This appears to be a custom header file, possibly containing function prototypes or macros that are used in this code.

Macro Definitions:

TRUE_ and FALSE_: These macros are defined with values 1 and 0, respectively. They are used to represent boolean true and false values, likely for readability and code clarity.
alt_print_grid Function:

This function is used to print a 3x3 grid of integers.
It takes a 2D integer array grid1 as its parameter.
It prints the grid elements, separating them with spaces and newline characters, to visually display the grid.

sandpiles_sum Function:

This function is used to perform the sum of two sandpile grids and stabilize the result.
It takes two 3x3 integer arrays grid1 and grid2 as input.
It first adds grid2 to grid1 using the add_grids function.
It then checks if the resulting grid (grid1) is stable using the is_stable function. If not, it prints the grid using alt_print_grid.
It enters a while loop that continues until the grid becomes stable.
In each iteration, it calls the topple function to simulate the toppling of sand grains and checks if the grid is stable. If not, it prints the grid.
is_stable Function:

This function checks if any cell in a 3x3 grid contains a value greater than 3.
It takes a 2D integer array grid1 as input.
It iterates through the grid and returns FALSE_ (0) as soon as it finds a cell with a value greater than 3. If no such cell is found, it returns TRUE_ (1), indicating that the grid is stable.

add_grids Function:

This function adds the values of two 3x3 grids without any restrictions.
It takes two 2D integer arrays grid1 and grid2 as input.
It iterates through the grids and adds the corresponding elements of grid2 to grid1.
topple Function:

This function simulates the toppling of sand grains in a grid.
It takes a 3x3 integer array grid1 as input.
It initializes a temporary grains array to all zeros.
It iterates through the cells of grid1 and, for each cell with a value greater than 3, distributes sand grains to neighboring cells and reduces the value of the current cell by 4.
After processing all cells, it adds the grains array to grid1 using the add_grids function.
