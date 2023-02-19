/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:46:00 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/18 19:25:07 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	aux;

	aux = 0;
	while (argv[0][aux] != '\0')
	{
		write(1, &argv[0][aux], 1);
		aux++;
	}
	write(1, "\n", 1);
	return (0);
}
