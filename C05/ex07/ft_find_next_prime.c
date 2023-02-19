/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:44:00 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/18 23:40:11 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_upper_numbers(int nb, int i, int check)
{
	while (i <= (nb / 3))
	{
		if ((nb % i) == 0)
		{
			check = 0;
			break ;
		}
		else
			check = 1;
		i++;
	}
	return (check);
}

int	check_prime(int nb, int i, int check)
{
	if (nb <= 50)
	{
		while (i <= (nb / 2))
		{
			if ((nb % i) == 0)
			{
				check = 0;
				break ;
			}
			else
				check = 1;
			i++;
		}
	}
	else
		check = check_upper_numbers(nb, i, check);
	return (check);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	check;

	check = 0;
	if (nb <= 1)
		return (2);
	else if (nb == 2 || nb == 3)
		return (3);
	while (!check)
	{
		i = 2;
		check = check_prime(nb, i, check);
		if (check)
			break ;
		nb++;
	}
	return (nb);
}

/* int	main(void)
{
	printf("ft_find_next_prime(-5): %d\nft_find_next_prime(2): %d\n",
		ft_find_next_prime(-5), ft_find_next_prime(2));
	printf("ft_find_next_prime(3): %d\nft_find_next_prime(1): %d\n",
		ft_find_next_prime(3), ft_find_next_prime(1));
	printf("ft_find_next_prime(4): %d\nft_find_next_prime(12): %d\n",
		ft_find_next_prime(4), ft_find_next_prime(12));
	printf("ft_find_next_prime(18): %d\nft_find_next_prime(27): %d\n",
		ft_find_next_prime(18), ft_find_next_prime(27));
	printf("ft_find_next_prime(44): %d\nft_find_next_prime(77): %d\n",
		ft_find_next_prime(44), ft_find_next_prime(77));
	return (0);
}
 */