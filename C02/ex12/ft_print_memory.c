/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 00:06:46 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/16 21:57:56 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_memory(void *ptr, int size)
{
	char	hex_digits[16];
	char	*p;
	char	buffer[64];
	int		i;
	int		j;
	int		address;
	int		k;

	i = 0;
	p = ptr;
	hex_digits[0] = "0123456789abcdef";
	while (i < size)
	{
		address = (int)p + i;
		k = 7;
		while (k >= 0)
		{
			buffer[k] = hex_digits[address & 0xf];
			address >>= 4;
			k--;
		}
		buffer[8] = ':';
		write(1, buffer, 9);
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
			{
				buffer[0] = hex_digits[(unsigned char)p[i + j] >> 4];
				buffer[1] = hex_digits[(unsigned char)p[i + j] & 0xf];
				buffer[2] = ' ';
				write(1, buffer, 3);
				buffer[0] = (p[i + j] >= ' ' && p[i + j] <= '~') ? p[i + j] : '.';
				write(1, buffer, 1);
			} else
			{
				write(1, "   ", 3);
			}
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}
