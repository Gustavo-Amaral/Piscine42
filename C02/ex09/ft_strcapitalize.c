/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:34:56 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/16 21:55:05 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_test(char *str, int i, int c)
{
	if (str[i] >= 'a' && str[i] <= 'z' && c == 0)
	{
		str[i] = str[i] - 32;
	}
	if (str[i] >= 'A' && str[i] <= 'Z' && c > 0)
	{
		str[i] = str[i] + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			ft_test(str, i, c);
			c++;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_strcapitalize(argv[1]));
	return (0);
}
*/