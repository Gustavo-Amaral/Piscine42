/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamaral <gamaral@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 16:46:55 by gamaral           #+#    #+#             */
/*   Updated: 2023/02/12 14:43:11 by gamaral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checking_args(int argc, char **argv);
int	ft_strlen(char *str);
int	*get_entry_numbers(char *str);
int	ft_atoi(char *str);
int	solve(int **tab, int *entry, int pos);