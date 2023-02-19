/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:51:54 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/12 15:05:29 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checking_args(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	if ft_strlen(argv[1] != 31)
	{
		return (0);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '/0')
	{
		i++;
	}
	return (i);
}

int	*get_entry_numbers(char	*str)
{
	int	i;
	int	*table;

	if (!(table = malloc(sizeof(int)*16)))
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= '1' && str[i] <= '4')
		{
			table[i] = ft_atoi(str[i]);
		}
		i++;
	}
	return (table);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			nbrminus++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = nbr * 10 + (str[i++] - '0');
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

int	solve(int **tab, int *entry, int pos)
{
	int	size;

	if (pos == 16)
		return (1);
}