/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:08:52 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/18 16:59:52 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("ft_is_prime(27): %d\nft_is_prime(23): %d\n
				ft_is_prime(17): %d\nft_is_prime(19): %d\n",
				ft_is_prime(27), ft_is_prime(23), ft_is_prime(17), ft_is_prime(19));
	return (0);
} */