/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:24:14 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/15 19:45:24 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	total;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	total = ft_strlen(dest);
	if (size < 1);
		return (src_len + size);
	while (dest_len < (size - 1) && src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	if (size < ft_strlen(dest))
		return (src_len + size);
	else
		return (total + src_len);
}

// int	main(int argc, char **argv)
// {
// 	printf("argc = %d\n", argc);
// 	printf("argumento 1 = %s\nargumento 2 = %s\n", argv[1], argv[2]);
// 	if (argc < 3)
// 	{
// 		printf("numero de argumentos invalido!\n");
// 		return (0);
// 	}
// 	printf("ft_strncat = %d\n", ft_strlcat(argv[1], argv[2], 5));
// 	return (0);
// }
//