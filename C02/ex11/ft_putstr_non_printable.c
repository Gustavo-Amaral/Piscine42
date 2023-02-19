/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:48:59 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/16 21:52:52 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	calculating_hexa(char *str, int i)
{
	char	hex[3];

	if ((str[i] >> 4) < 10)
		hex[0] = (str[i] >> 4) + '0';
	else
		hex[0] = (str[i] >> 4) - 10 + 'a';
	if ((str[i] & 0x0f) < 10)
		hex[1] = (str[i] & 0x0f) + '0';
	else
		hex[1] = (str[i] & 0x0f) - 10 + 'a';
	hex[2] = '\0';
	ft_putchar('\\');
	ft_putchar(hex[0]);
	ft_putchar(hex[1]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(str[i]);
		}
		else
		{
			calculating_hexa(str, i);
		}
		i++;
	}
}
