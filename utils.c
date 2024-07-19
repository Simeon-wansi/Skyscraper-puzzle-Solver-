/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:53:08 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:53:09 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	ft_putstr(char *err_msg)
{
	write(1, err_msg, ft_strlen(err_msg));
}

void	print_error(int err)
{
	if (err == 0)
		ft_putstr(ERR_NO_0);
	else if (err == 1)
		ft_putstr(ERR_NO_1);
	else if (err == 2)
		ft_putstr(ERR_NO_2);
	else if (err == 3)
		ft_putstr(ERR_NO_3);
	else
		ft_putstr(ERR_NO_4);
}

void	print_tab_content(t_cell tab[SIZE][SIZE])
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			ft_putchar(tab[i][j].value + '0');
			if (j < SIZE - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
// Contains utility functions used throughout the project.
// ft_putchar: Writes a single character to the standard output.
// ft_strlen: Calculates and returns the length of a string.
// ft_putstr: Writes a string to the standard output.
// print_error: Handles error printing based on different error codes.

// Uses predefined error messages from the header file.
// Provides specific error messages for different types of errors.


// print_tab_content: Prints the final solution grid.

// Iterates through the 4x4 grid.
// Prints each cell's value with proper formatting (spaces between numbers, newline after each row).

// These functions abstract common operations like output and string manipulation, 
// making the code in other files cleaner and more focused on their specific tasks.
// Demonstrates good practice in centralizing common utilities and error handling.

// it provides essential input/output operations and error handling. 
// It helps maintain consistency in how the program communicates with the user, 
// both for displaying results and reporting errors. 
// The utility functions here are used across other files in the project, 
// showcasing modular design and code reusability.