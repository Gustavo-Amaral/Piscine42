/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorolive <jorolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:02:57 by jorolive          #+#    #+#             */
/*   Updated: 2023/02/04 18:57:23 by jorolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//include unixstandard to allow write.
//first void: function does not return any value.
//char c: function takes argument c as input.
//write(stdoutput, pointer(&)character(c), 1byte)
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
