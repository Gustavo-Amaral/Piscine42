/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaofern <joaofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:51:49 by joaofern          #+#    #+#             */
/*   Updated: 2023/02/23 20:12:18 by joaofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		while (str1[i] > str2[i])
			return (1);
		if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	if (str1[i] < str2[i])
		return (-1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc;
	while (j > 0)
	{
		i = 1;
		while (i < j - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		j--;
	}
	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
