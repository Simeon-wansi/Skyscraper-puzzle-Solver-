/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sngantch <sngantch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:53:01 by sngantch          #+#    #+#             */
/*   Updated: 2024/07/19 18:53:02 by sngantch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

# define SIZE		4
# define MIN_HEIGHT	1
# define MAX_HEIGHT	4
# define DELIMETER	32

# define ERR_NO_0	"Error\n"
# define ERR_NO_1	"Error: argc is not correct\n"
# define ERR_NO_2	"Error: len is not correct\n"
# define ERR_NO_3	"Error: height is not correct\n"
# define ERR_NO_4	"Error: delimeter is not correct\n"

typedef struct s_cell
{
	int	clue_up;
	int	clue_down;
	int	clue_left;
	int	clue_right;
	int	value;
}				t_cell;

void	rush01(int ac, char **av);
int		is_valid_arg(int ac, char **av);
void	init_tab(t_cell tab[SIZE][SIZE]);
void	parse_arg(t_cell tab[SIZE][SIZE], char *arg);
void	print_tab_content(t_cell tab[SIZE][SIZE]);
int		resolve(t_cell tab[SIZE][SIZE]);
int		is_clues_met(t_cell tab[SIZE][SIZE], int row, int col);

void	print_error(int err);
void	ft_putstr(char *err_msg);
int		ft_strlen(char *s);
void	ft_putchar(char c);

#endif
// Central header file for the entire project.
// Includes standard libraries like <unistd.h>.
// Defines constants:

// SIZE (4): The dimensions of the puzzle grid.
// MIN_HEIGHT and MAX_HEIGHT: The range of valid skyscraper heights.
// DELIMETER: The character used to separate clues in the input.


// Defines error messages for various scenarios.
// Declares the t_cell struct, which represents each cell in the grid:

// Stores clues for all four directions.
// Holds the current value of the cell.


// Declares function prototypes for all major functions used in the project.
// Uses include guards to prevent multiple inclusions.