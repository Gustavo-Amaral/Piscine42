/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:50:10 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/15 21:25:16 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
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
// 	printf("ft_strncat = %s\n", ft_strstr(argv[1], argv[2]));
// 	return (0);
// }
//