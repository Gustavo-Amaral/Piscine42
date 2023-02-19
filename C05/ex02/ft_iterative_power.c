/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:48:12 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/18 16:56:16 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else
	{
		aux = nb;
		while (power-- > 1)
		{
			nb *= aux;
		}
	}
	return (nb);
}

/* int	main(void)
{
	printf("result: %d\n", ft_iterative_power(0, 1));
	return (0);
} */