/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:08:21 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/17 00:20:43 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	aux;
	int	i;

	aux = 1;
	while (aux < argc)
	{
		i = 0;
		while (argv[aux][i] != '\0')
		{
			write(1, &argv[aux][i], 1);
			i++;
		}
		aux++;
		write(1, "\n", 1);
	}
	return (0);
}
