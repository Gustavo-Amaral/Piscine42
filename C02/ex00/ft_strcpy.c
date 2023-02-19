/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:57:53 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/15 19:18:27 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("string 1: %s\n", argv[1]);
	printf("string 2: %s\n", argv[2]);
	printf("result: %s\n", ft_strcpy(argv[1], argv[2]));
	return (0);
}
 */