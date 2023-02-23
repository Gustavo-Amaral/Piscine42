/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaofern <joaofern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:45:50 by joaofern          #+#    #+#             */
/*   Updated: 2023/02/23 14:19:11 by joaofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	while (--argc)
		ft_putstr(argv[argc]);
}
