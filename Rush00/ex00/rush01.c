/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:03:05 by jorolive          #+#    #+#             */
/*   Updated: 2023/02/19 13:42:00 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_putchar.c"
#include <unistd.h>

//rush(5,3) will print
///***\
// * *
//\***/

//start with '/' and if x>1, print x-1 chars with '*', and end with '\'
//if y > 1, print *, print x-1 ' ', and end with '*'
//end with '\' and if x>1, print x-1 chars with '*', and end with '/'

void	ft_putchar(char c);

void	ft_first_horizontal_lines(int x)
{
	int	column_counter;

	column_counter = 1;
	ft_putchar('/');
	while (column_counter < x - 1)
	{
		ft_putchar('*');
		column_counter++;
	}
	if (x >= 2)
	{
		ft_putchar('\\');
	}
}

void	ft_last_horizontal_lines(int x)
{
	int	column_counter;

	column_counter = 1;
	ft_putchar('\\');
	while (column_counter < x - 1)
	{
		ft_putchar('*');
		column_counter++;
	}
	if (x >= 2)
	{
		ft_putchar('/');
	}
}

void	ft_vertical_lines(int line_counter, int x, int y)
{
	int	column_counter;

	while (line_counter < (y - 1) && y > 2)
	{
		column_counter = 1;
		ft_putchar('*');
		while (column_counter < x - 1)
		{
			ft_putchar(' ');
			column_counter++;
		}
		if (x > 1)
		{
			ft_putchar('*');
		}
		ft_putchar('\n');
		line_counter++;
		if (line_counter == (y - 1))
		{
			ft_last_horizontal_lines(x);
		}
	}
}

int	rush(int x, int y)
{
	int	line_counter;

	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	line_counter = 0;
	if (x >= 1)
	{
		ft_first_horizontal_lines(x);
		ft_putchar('\n');
		line_counter++;
	}
	if (y == 2)
	{
		ft_last_horizontal_lines(x);
		ft_putchar('\n');
		line_counter++;
	}
	ft_vertical_lines(line_counter, x, y);
	if (line_counter != y)
	{
		ft_putchar('\n');
	}
	return (0);
}
