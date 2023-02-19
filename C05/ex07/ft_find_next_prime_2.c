/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:24:53 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/19 21:24:53 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;
	int	b;

	a = nb;
	b = 2;
	if (a <= 1)
		return (0);
	while (b <= a / b)
	{
		if (a % b == 0)
			return (0);
		b++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
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