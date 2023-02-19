/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:18:25 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/06 22:41:50 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	if (i >= 0)
	{
		write(1, "P", 2);
	}
	else
	{
		write(1, "N", 2);
	}
}