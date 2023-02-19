/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:12:08 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/19 22:11:58 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FT_BOOLEAN_H__

#define __FT_BOOLEAN_H__

#include <unistd.h>

#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
#define TRUE		1
#define FALSE		0
#define SUCCESS		0
#define EVEN(arg)	(arg % 2)

typedef int	t_bool;

#endif