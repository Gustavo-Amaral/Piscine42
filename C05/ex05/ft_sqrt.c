/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:03:50 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/18 23:26:08 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	if (nb >= 2)
	{
		i = 0;
		while (i <= (nb / 2))
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

/* int	main(void)
{
	printf("ft_sqrt(0): %d\nft_sqrt(81): %d\nft_sqrt(1): %d\nft_sqrt(5): %d\n",
		ft_sqrt(0), ft_sqrt(81), ft_sqrt(1), ft_sqrt(5));
	return (0);
}
 */