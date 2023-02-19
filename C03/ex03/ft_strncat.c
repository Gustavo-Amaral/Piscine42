/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:46:20 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/09 23:23:21 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *dest)
{
	int length;

	length = 0;
	while (*dest != '\0')
	{
		dest++;
		length++;
	}
	return (length);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while(i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest);
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
// 	printf("ft_strncat = %s\n", ft_strncat(argv[1], argv[2], 8));
// 	return (0);
// }