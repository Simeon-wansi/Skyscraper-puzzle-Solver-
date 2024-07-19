/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:53:19 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:53:20 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "rush01.h"

int	is_correct_height(char c)
{
	return (c >= MIN_HEIGHT + 48 && c <= MAX_HEIGHT + 48);
}

int	is_correct_delimeter(char c)
{
	return (c == DELIMETER);
}

int	is_valid_arg(int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	if (ac != 2)
		return (0);
	len = ft_strlen(av[1]);
	if (len != SIZE * SIZE * 2 - 1)
		return (0);
	while (i < len)
	{
		if (av[1][i] && !is_correct_height(av[1][i]))
			return (0);
		i++;
		if (av[1][i] && !is_correct_delimeter(av[1][i]))
			return (0);
		i++;
	}
	return (1);
}

// Ensures that the input provided to the program is valid.
// is_correct_height: Checks if a given character represents a valid height (1-4).
// is_correct_delimeter: Verifies if a character is the correct delimiter.
// is_valid_arg: The main validation function that:

// Checks if the correct number of arguments is provided.
// Verifies the length of the input string.
// Ensures all heights and delimiters are valid.
