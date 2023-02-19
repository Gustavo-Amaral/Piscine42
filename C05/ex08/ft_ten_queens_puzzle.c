/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:22:03 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/19 22:22:11 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
// #include <stdio.h>

void	ft_put_queens(int queens[10], int size)
{
	int		col;
	char	pos;

	col = 0;
	while (col < size)
	{
		if (queens[col] >= 0)
			pos = queens[col] + '0';
		else
			pos = ' ';
		(void) write(1, &pos, 1);
		col++;
	}
	(void) write(1, "\n", 1);
}

int	ft_validate(int queens[10], int col)
{
	int		idx;
	int		x_diff;
	int		y_diff;

	idx = col - 1;
	while (idx >= 0)
	{
		if (queens[idx] == queens[col])
			return (1);
		y_diff = queens[idx] - queens[col];
		x_diff = col - idx;
		if (x_diff == y_diff || x_diff == -y_diff)
			return (1);
		idx--;
	}
	return (0);
}

int	ft_queens_solve(int queens[10], int size, int col, int *nsolut)
{
	int		row;

	row = 0;
	while (row < size)
	{
		queens[col] = row;
		if (ft_validate(queens, col) == 0)
		{
			if (col == size - 1)
			{
				*nsolut = *nsolut + 1;
				ft_put_queens(queens, size);
			}
			else
				ft_queens_solve(queens, size, col + 1, nsolut);
		}
		row++;
	}
	return (*nsolut);
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	nsolutions;
	int	col;
	int	size;

	size = 10;
	col = 0;
	nsolutions = 0;
	ft_queens_solve(queens, size, 0, &nsolutions);
	return (nsolutions);
}

// int	main(void)
// {
// 	int	nsolutions;

// 	nsolutions = ft_ten_queens_puzzle();
// 	printf("\nNumber of solutions = %d", nsolutions);
// 	return (0);
// }
