/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:24:42 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/17 21:42:16 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

// Returns 10 to the 'num' -> 10^num
int	expo(int num)
{
	int	total;

	total = 1;
	while (num > 0)
	{
		total *= 10;
		num--;
	}
	return (total);
}

// Convert Char to Int and returns the Int
int	c2i_converter(char *str, int size)
{
	int	total;
	int	x;

	x = 0;
	total = 0;
	while (x < size)
	{
		total = total + (str[x] - 48) * expo(size - 1 - x);
		x++;
	}
	return (total);
}

// Returns the len of consequent numbers on a string
int	get_numlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] && str[x] >= '0' && str[x] <= '9')
		x++;
	return (x);
}

// checks how many - are present in a string.
// If even returns 1, othewise returns -1
int	num_signal(char *str, int size)
{
	int	x;
	int	total;

	x = 0;
	total = 0;
	while (x < size)
	{
		if (str[x] == '-')
			total++;
		x++;
	}
	if (total % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	x;
	int	numlen;
	int	signal;
	int	final_int;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || (str[x] > 32 && str[x] < '0') || str[x] > '9')
		{
			if (str[x] != '-' && str[x] != '+')
				return (0);
		}
		if (str[x] >= '0' && str[x] <= '9')
		{
			numlen = get_numlen(&str[x]);
			signal = num_signal(str, x);
			final_int = c2i_converter(&str[x], numlen);
			return (final_int * signal);
		}
		x++;
	}
	return (0);
}

/*int main(void)
{
	char *str = "  ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}*/