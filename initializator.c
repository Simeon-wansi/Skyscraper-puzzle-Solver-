/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:51:58 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:51:59 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

void	init_cell(t_cell *cell)
{
	cell->clue_up = 0;
	cell->clue_down = 0;
	cell->clue_right = 0;
	cell->clue_left = 0;
	cell->value = 0;
}

void	init_tab(t_cell tab[SIZE][SIZE])
{
	int	i;
	int	j;

	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while (++j < SIZE)
			init_cell(&tab[i][j]);
	}
}
// Handles the initialization of the puzzle grid.
// init_cell: Sets all values of a single cell to zero.
// init_tab: Iterates over the entire grid, initializing each cell.
// Ensures the grid starts in a clean state before solving begins.