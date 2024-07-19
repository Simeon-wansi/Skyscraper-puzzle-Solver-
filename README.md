# Skyscraper-puzzle-Solver-
Overall Project Purpose:
This project is a C program that solves the Skyscraper puzzle. The puzzle involves placing skyscrapers of different heights in a grid, following certain visibility rules based on clues given for each row and column.

This project demonstrates skills in algorithm implementation (particularly backtracking), input parsing, data structure design, and modular C programming. 
It's a complex puzzle solver that requires careful management of game state and efficient checking of puzzle rules.

Purpose of each file:

1. main.c:
   - Contains the main function that calls the rush01 function.
   - Serves as the entry point of the program.

2. rush01.h:
   - Header file containing function prototypes, struct definitions, and constant declarations.
   - Defines the t_cell struct which represents each cell in the puzzle grid.
   - Includes necessary standard libraries and defines error messages.

3. rush01.c:
   - Contains the rush01 function, which is the core of the program.
   - Validates arguments, initializes the grid, parses input, and attempts to solve the puzzle.
   - Prints the solution if found, or an error message if not.

4. resolver.c:
   - Implements the main solving algorithm using backtracking.
   - Contains functions to check if a value is present in a row/column, find empty cells, and the main resolve function.

5. parser.c:
   - Responsible for parsing the input clues and populating the puzzle grid with these clues.
   - Contains separate functions for parsing up, down, left, and right clues.

6. validator.c:
   - Validates the input arguments.
   - Checks if the number of arguments is correct, the input length is valid, and if the heights and delimiters are correct.

7. checker.c:
   - Implements functions to check if the current state of the puzzle satisfies the clues.
   - Contains separate functions to check visibility from up, down, left, and right directions.

8. initializator.c:
   - Initializes the puzzle grid by setting all cell values and clues to zero.

9. -Contains utility functions used throughout the project
   - it provides essential input/output operations and error handling. 
	It helps maintain consistency in how the program communicates with the user, both for displaying results and reporting errors. 
	The utility functions here are used across other files in the project, showcasing modular design and code reusability.
 

10. Makefile:
   - Defines rules for compiling the project, cleaning up, and running the program.
   - Sets compiler flags and default arguments for running the program.
