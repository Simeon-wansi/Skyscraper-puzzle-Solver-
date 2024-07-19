/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolver.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:52:37 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:52:38 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

int	is_value_present(t_cell tab[SIZE][SIZE], int row, int col, int val)
{
	int	i;

	i = -1;
	while (++i < SIZE)
		if (val == tab[row][i].value || val == tab[i][col].value)
			return (1);
	return (0);
}

int	get_empty_cell(t_cell tab[SIZE][SIZE], int *row, int *col)
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
		{
			if (tab[i][j].value == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
		}
	}
	return (0);
}

int	resolve(t_cell tab[SIZE][SIZE])
{
	int	value;
	int	col;
	int	row;

	if (!get_empty_cell(tab, &row, &col))
		return (1);
	value = MIN_HEIGHT - 1;
	while (++value <= MAX_HEIGHT)
	{
		if (!is_value_present(tab, row, col, value))
		{
			tab[row][col].value = value;
			if (is_clues_met(tab, row, col))
				if (resolve((tab)))
					return (1);
		}
	}
	tab[row][col].value = 0;
	return (0);
}

// Contains the core solving algorithm using backtracking.
// is_value_present: Checks if a value already exists in a given row or column.
// get_empty_cell: Finds the next empty cell in the grid.
// resolve: The main recursive backtracking function that:

// Finds an empty cell.
// Tries values from 1 to 4.
// Checks if the value is valid and meets clue requirements.
// Recursively solves for the next cell.
// Backtracks if no valid solution is found.