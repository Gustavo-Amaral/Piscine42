/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:57:53 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/16 00:44:40 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int	main(int argc, char **argv)
{
	unsigned int	n;

	n = 10;
	if (argc != 3)
		return (0);
	printf("string 1: %s\n", argv[1]);
	printf("string 2: %s\n", argv[2]);
	printf("result: %s\n", ft_strncpy(argv[1], argv[2], n));
	return (0);
}
 */