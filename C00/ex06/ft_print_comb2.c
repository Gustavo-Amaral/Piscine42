/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:48:32 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/06 21:02:38 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left_pair;
	int	right_pair;

	left_pair = 0;
	while (left_pair < 99)
	{
		right_pair = left_pair + 1;
		while (right_pair <= 99)
		{
			ft_putchar((left_pair / 10) + '0');
			ft_putchar((left_pair % 10) + '0');
			ft_putchar(' ');
			ft_putchar((right_pair / 10) + '0');
			ft_putchar((right_pair % 10) + '0');
			if (left_pair != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right_pair++;
		}
		left_pair++;
	}
}
