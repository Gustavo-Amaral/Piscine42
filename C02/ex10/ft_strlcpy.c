/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:22:53 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/16 21:53:49 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;

	offset = 0;
	if (size > 0)
	{
		while (src[offset] != '\0')
		{
			if (offset == size)
			{
				offset--;
				break ;
			}
			dest[offset] = src[offset];
			offset++;
		}
	}
	while (offset < size)
	{
		dest[offset] = '\0';
		offset++;
	}
	return (offset);
}
