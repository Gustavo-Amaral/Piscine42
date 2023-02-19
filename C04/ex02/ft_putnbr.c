/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:37:07 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/16 22:37:26 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		putchar('-');
	}
	if (nb < 10 && nb >= 0)
	{
		putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		putchar((nb % 10) + 48);
	}
}
