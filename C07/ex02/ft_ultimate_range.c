/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:56:00 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/19 16:58:51 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*sup;
	int		diff;
	int		i;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		sup = 0;
		return (0);
	}
	sup = malloc(sizeof(int) * (diff));
	if (!sup)
		return (-1);
	while (min < max)
	{
		sup[i] = min;
		i++;
		min++;
	}
	*range = sup;
	return (i);
}

/* int	main(void)
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
 */