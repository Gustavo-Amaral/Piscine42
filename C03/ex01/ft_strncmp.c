/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:37:19 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/15 18:45:17 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
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
// 	printf("ft_strcmp = %d\n", ft_strcmp(argv[1], argv[2], 10));
// 	return (0);
// }