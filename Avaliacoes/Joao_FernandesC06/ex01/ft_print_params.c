/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaofern <joaofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:30:58 by joaofern          #+#    #+#             */
/*   Updated: 2023/02/23 18:33:31 by joaofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	j;
	int	k;

	j = 1;
	while (j < argc)
	{
		k = 0;
		while (argv[j][k])
		{
			ft_putchar(argv[j][k]);
			++k;
		}
		++j;
		ft_putchar('\n');
	}
}
