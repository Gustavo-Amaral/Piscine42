/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:34:11 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/08 17:50:55 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_div;
	int	aux_mod;

	if (*b == 0)
	{
		return;
	}
	aux_div = *a / *b;
	aux_mod = *a % *b;
	*a = aux_div;
	*b = aux_mod;
}
