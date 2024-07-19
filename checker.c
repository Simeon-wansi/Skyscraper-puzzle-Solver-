/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:01:59 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/15 13:12:14 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

int	is_valid_from_right(t_cell tab[SIZE][SIZE], int row, int col)
{
	int	visible_count;
	int	current_height;
	int	max_height;
	int	i;

	visible_count = 0;
	current_height = tab[row][SIZE - 1].value;
	max_height = tab[row][SIZE - 1].value;
	if (current_height > 0)
		visible_count++;
	i = SIZE;
	while (--i >= 0)
	{
		current_height = tab[row][i].value;
		if (current_height == 0)
			return (1);
		if (current_height > max_height)
		{
			visible_count++;
			max_height = current_height;
		}
	}
	return (visible_count == tab[row][col].clue_right);
}

int	is_valid_from_left(t_cell tab[SIZE][SIZE], int row, int col)
{
	int	visible_count;
	int	current_height;
	int	max_height;
	int	i;

	visible_count = 0;
	current_height = tab[row][0].value;
	max_height = tab[row][0].value;
	if (current_height > 0)
		visible_count++;
	i = -1;
	while (++i < SIZE)
	{
		current_height = tab[row][i].value;
		if (current_height == 0)
			return (1);
		if (current_height > max_height)
		{
			visible_count++;
			max_height = current_height;
		}
	}
	return (visible_count == tab[row][col].clue_left);
}

int	is_valid_from_down(t_cell tab[SIZE][SIZE], int row, int col)
{
	int	visible_count;
	int	current_height;
	int	max_height;
	int	i;

	visible_count = 0;
	current_height = tab[SIZE - 1][col].value;
	max_height = tab[SIZE - 1][col].value;
	if (current_height > 0)
		visible_count++;
	i = SIZE;
	while (--i >= 0)
	{
		current_height = tab[i][col].value;
		if (current_height == 0)
			return (1);
		if (current_height > max_height)
		{
			visible_count++;
			max_height = current_height;
		}
	}
	return (visible_count == tab[row][col].clue_down);
}

int	is_valid_from_up(t_cell tab[SIZE][SIZE], int row, int col)
{
	int	visible_count;
	int	current_height;
	int	max_height;
	int	i;

	visible_count = 0;
	current_height = tab[0][col].value;
	max_height = tab[0][col].value;
	if (current_height > 0)
		visible_count++;
	i = -1;
	while (++i < SIZE)
	{
		current_height = tab[i][col].value;
		if (current_height == 0)
			return (1);
		if (current_height > max_height)
		{
			visible_count++;
			max_height = current_height;
		}
	}
	return (visible_count == tab[row][col].clue_up);
}

int	is_clues_met(t_cell tab[SIZE][SIZE], int row, int col)
{
	if (is_valid_from_up(tab, row, col))
		if (is_valid_from_down(tab, row, col))
			if (is_valid_from_left(tab, row, col))
				if (is_valid_from_right(tab, row, col))
					return (1);
	return (0);
}
// Implements the logic to check if the current state of the puzzle satisfies all clues.
// Contains four functions to check visibility from each direction:

// is_valid_from_up
// is_valid_from_down
// is_valid_from_left
// is_valid_from_right


// Each function counts visible "skyscrapers" and compares against the clue.
// is_clues_met: Combines all four directional checks to verify if all clues are satisfied.