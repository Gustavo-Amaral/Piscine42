/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:54:14 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/12 18:18:42 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux_beg;
	int	aux_end;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		aux_beg = *(tab + i);
		aux_end = *(tab + (size - 1 - i));
		*(tab + i) = aux_end;
		*(tab + (size - 1 - i)) = aux_beg;
		i++;
	}
}

// int	main(void)
// {
// int	array[10] = {0, 1, 2, 3, 4};
// int	size;
// int	i;

// size = 5;
// i = 0;
// printf("array antes: ");
// while(i < size)
// {
// printf("%d  ", *(array + i));
// i++;
// }
// printf("\n");
// ft_rev_int_tab(array, size);
// printf("\narray depois: ");
// i = 0;
// while(i < size)
// {
// printf("%d  ", *(array + i));
// i++;
// }
// return (0);
// }
//