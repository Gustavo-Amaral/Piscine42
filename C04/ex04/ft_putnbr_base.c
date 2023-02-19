/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:43:10 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/17 21:46:27 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

int	check_base(char *base)
{
	int	x;
	int	y;

	x = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[x] != '\0')
	{
		y = x + 1;
		while (base[y])
		{
			if (base[x] == base[y])
				return (0);
			if (base[x] == '+' || base[x] == '-')
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putchar(int n)
{
	if (n < 10)
	{
		n = n + 48;
		write (1, &n, 1);
	}
	else
	{
		n = n + 55;
		write (1, &n, 1);
	}
}

int	base_number(char *base)
{
	int	x;

	x = 0;
	while (base[x])
		x++;
	return (x);
}

void	ft_putnbr(int nbr, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr, base);
	}
	if (nbr > 0)
	{
		if (nbr / base != 0)
			ft_putnbr(nbr / base, base);
		ft_putchar(nbr % base);
	}
	if (nbr == 0)
	{
		ft_putchar(nbr % base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_int;

	if (check_base(base))
	{
		base_int = base_number(base);
		if (nbr == -2147483648)
		{
			write(1, "-" , 1);
			ft_putnbr(2147483648 / base_int, base_int);
			ft_putnbr(2147483648 % base_int, base_int);
		}
		else
		{
			ft_putnbr(nbr, base_int);
		}
	}
	return ;
}

/*int main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
}*/