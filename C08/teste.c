#include <stdio.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	t_stock_str	*par;

	if (argc == 1)
		return (0);
	par = ft_strs_to_tab((argc - 1), argv);
	ft_show_tab(par);
	return (0);
}