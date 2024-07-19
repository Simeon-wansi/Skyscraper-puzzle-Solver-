/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:52:29 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:52:30 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

void	parse_right_clues(t_cell tab[SIZE][SIZE], char *clues)
{
	int	row;
	int	col;
	int	clue_value;
	int	clue_pos;

	row = -1;
	clue_pos = SIZE * 6;
	while (++row < SIZE)
	{
		col = -1;
		clue_value = *(clues + clue_pos) - '0';
		while (++col < SIZE)
			tab[row][col].clue_right = clue_value;
		clue_pos += 2;
	}
}

void	parse_left_clues(t_cell tab[SIZE][SIZE], char *clues)
{
	int	row;
	int	col;
	int	clue_value;
	int	clue_pos;

	row = -1;
	clue_pos = SIZE * 4;
	while (++row < SIZE)
	{
		col = -1;
		clue_value = *(clues + clue_pos) - '0';
		while (++col < SIZE)
			tab[row][col].clue_left = clue_value;
		clue_pos += 2;
	}
}

void	parse_down_clues(t_cell tab[SIZE][SIZE], char *clues)
{
	int	row;
	int	col;
	int	clue_value;
	int	clue_pos;

	col = -1;
	clue_pos = SIZE * 2;
	while (++col < SIZE)
	{
		row = -1;
		clue_value = *(clues + clue_pos) - '0';
		while (++row < SIZE)
			tab[row][col].clue_down = clue_value;
		clue_pos += 2;
	}
}

void	parse_up_clues(t_cell tab[SIZE][SIZE], char *clues)
{
	int	row;
	int	col;
	int	clue_value;
	int	clue_pos;

	col = -1;
	clue_pos = SIZE * 0;
	while (++col < SIZE)
	{
		row = -1;
		clue_value = *(clues + clue_pos) - '0';
		while (++row < SIZE)
			tab[row][col].clue_up = clue_value;
		clue_pos += 2;
	}
}

void	parse_arg(t_cell tab[SIZE][SIZE], char *arg)
{
	parse_up_clues(tab, arg);
	parse_down_clues(tab, arg);
	parse_left_clues(tab, arg);
	parse_right_clues(tab, arg);
}

// Responsible for interpreting the input string and populating the grid with clues.
// Contains separate functions for parsing clues for each direction:

// parse_up_clues
// parse_down_clues
// parse_left_clues
// parse_right_clues


// Each parsing function reads the appropriate section of the input string and sets the corresponding clue values in the grid.
// The main parse_arg function calls all four directional parsing functions.