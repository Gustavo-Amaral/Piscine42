/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:56:00 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/18 22:01:56 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;
	int	j;

	if (min > max)
		return (0);
	i = 0;
	diff = max - min;
	range = malloc(sizeof(int) * (diff - 1));
	while (i < diff)
	{
		j = 0;
		while (j < diff)
		{
			range[i][j] = min;
			min++;
			j++;
		}
		i++;
	}
	return (range);
}

int	main(void)
{
	int	**str;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 0;
	max = 10;
	str = ft_ultimate_range(str, min, max);
	while (i < (max - min))
	{
		printf("int string: %d\n", str[i]);
		i++;
	}
	free(str);
	return (0);
}
