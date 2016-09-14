/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 13:29:23 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/08 20:49:19 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_par.h"

int				string_size(char *string)
{
	int			size;

	size = 0;
	while (*(string++))
		size++;
	return (size);
}

char			*copy_string(char *string)
{
	char		*copy;
	char		*ptr;

	ptr = string;
	copy = malloc(sizeof(char) * (string_size(string) + 1));
	while (*ptr)
	{
		*copy = *ptr;
		copy++;
		ptr++;
	}
	return (string);
}

t_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *array;
	int			i;

	i = 0;
	array = malloc(ac * sizeof(t_stock_par));
	while (i < ac)
	{
		array[i].size_param = string_size(av[i]);
		array[i].str = &(av[i][0]);
		array[i].copy = copy_string(av[i]);
		array[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	return (array);
}
