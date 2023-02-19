/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:04:28 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/12 18:24:04 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while ((j + 1) < (size - i))
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	array[10] = {97, 53, 7, 13, 64, 11, 5, 6, 94, 0};
// 	int	size;
// 	int	i;

// 	size = 10;
// 	i = 0;
// 	printf("array antes: ");
// 	while(i < size)
// 	{
// 		printf("%d  ", *(array + i));
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(array, size);
// 	printf("\narray depois: ");
// 	i = 0;
// 	while(i < size)
// 	{
// 		printf("%d  ", *(array + i));
// 		i++;
// 	}
// 	return (0);
// }
//