/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 13:09:01 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 13:18:35 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int match;

	i = 0;
	while (i < length)
	{
		match = 0;
		j = 0;
		while (j < length)
		{
			if (tab[i] == tab[j] && i != j)
				match++;
			j++;
		}
		if (match == 0)
			return (tab[i]);
		i++;
	}
	return (0);
}
