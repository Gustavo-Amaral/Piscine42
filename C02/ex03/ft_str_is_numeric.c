/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:57:30 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/15 19:16:22 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' || str[i] >= '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("string 1: %s\n", argv[1]);
	printf("result: %d\n", ft_str_is_numeric(argv[1]));
	return (0);
}
 */