/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:03:07 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/19 17:03:32 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	length += (ft_strlen(sep) * (size - 1)) + 1;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*sup;

	if (size == 0)
	{
		sup = malloc(sizeof(char));
		*sup = '\0';
		return (sup);
	}
	sup = malloc(sizeof(char) * ft_length(size, strs, sep));
	if (!sup)
		return (0);
	*sup = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(sup, strs[i]);
		if (i < size -1)
			ft_strcat(sup, sep);
		i++;
	}
	return (sup);
}

/* int	main(int argc, char **argv)
{
	char	**strs;
	char	*sep;
	char	*str;
	int		size;

	strs = argv;
	sep = "\tSPLIT!\t";
	size = argc;
	printf("size = %d\n", size);
	str = ft_strjoin(size, strs, sep);
	printf("joined string: %s\n", str);
	free(str);
	return (0);
}
 */