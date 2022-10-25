/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:37:51 by vsozonof          #+#    #+#             */
/*   Updated: 2022/10/03 04:49:45 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 10

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_board(int *board, int curr_clmn)
{
	int	prev_clmn;

	prev_clmn = 0;
	while (prev_clmn < curr_clmn)
	{
		if (board[prev_clmn] + curr_clmn - prev_clmn == board[curr_clmn]
			|| board[prev_clmn] - (curr_clmn - prev_clmn) == board[curr_clmn]
			|| board[prev_clmn] == board[curr_clmn])
			return (1);
		{	
		prev_clmn++;
		}
	}
	return (0);
}

void	print_solutions(int *board)
{
	int	collumn;

	collumn = 0;
	while (collumn < SIZE)
	{
		ft_putchar(board[collumn] + '0');
		collumn++;
	}
	write(1, "\n", 1);
}

void	solver(int *board, int column, int *n)
{	
	int	pos;

	if (column >= SIZE)
		return ;
	pos = 0;
	while (pos < SIZE)
	{
		board[column] = pos;
		if (!check_board(board, column))
		{
			if (column == SIZE - 1)
			{
				print_solutions(board);
				(*n)++;
			}
			solver(board, column + 1, n);
		}
		pos++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[SIZE];
	int	collumn;
	int	n;

	n = 0;
	collumn = 0;
	while (collumn < SIZE)
		board[collumn++] = 0;
	solver(board, 0, &n);
	return (n);
}
