/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:52:52 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:52:53 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

void	rush01(int ac, char **av)
{
	t_cell	tab[SIZE][SIZE];

	if (is_valid_arg(ac, av))
	{
		init_tab(tab);
		parse_arg(tab, av[1]);
		if (resolve(tab))
		{
			print_tab_content(tab);
			return ;
		}
	}
	print_error(0);
}

// Implements the rush01 function, which orchestrates the puzzle-solving process.
// Checks if the input is valid using is_valid_arg.
// Initializes the puzzle grid using init_tab.
// Parses the input clues with parse_arg.
// Attempts to solve the puzzle using the resolve function.
// If a solution is found, it prints the result using print_tab_content.
// If no solution is found or input is invalid, it prints an error message.


