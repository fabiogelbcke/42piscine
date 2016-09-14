/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 19:23:55 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/09 19:32:59 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *table;

	i = 0;
	table = malloc(sizeof(int) * length);
	while (i < length)
	{
		table[i] = f(tab[i]);
		i++;
	}
	return (table);
}
