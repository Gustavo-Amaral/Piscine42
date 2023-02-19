/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:36:07 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/12 14:40:12 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(int argc, char **argv)
{
	int	table[4][4];
	int	entry[16];

	table = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	};
	checking_args(argc, argv);
	entry = get_entry_numbers(argv[1]);
	if (solve_puzzle(table, entry, 0))
	{
		print_solution(table);
	}
	else{
		ft_putstr("Error!\n");
	}
	return (0);
}
