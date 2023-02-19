/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:15:41 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/19 16:58:22 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*sup;
	int	diff;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	diff = max - min;
	sup = malloc(sizeof(int) * (diff));
	if (!sup)
		return (0);
	while (min < max)
	{
		sup[i] = min;
		min++;
		i++;
	}
	return (sup);
}

/* int	main(void)
{
	int	*str;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 0;
	max = 10;
	str = ft_range(min, max);
	while (i < (max - min))
	{
		printf("int string: %d\n", str[i]);
		i++;
	}
	free(str);
	return (0);
}
 */