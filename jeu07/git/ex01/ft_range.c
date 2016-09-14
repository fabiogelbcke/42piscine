/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 07:49:57 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/05 23:22:27 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int		*ft_range(int min, int max)
{
	int *int_table;
	int *ptr;
	int i;

	ptr = NULL;
	i = min;
	if (min >= max)
		return (ptr);
	int_table = (int*)malloc(sizeof(int) * (max - min + 1));
	if (int_table == NULL)
		return (ptr);
	ptr = int_table;
	while (i < max)
	{
		*ptr = i;
		ptr++;
		i++;
	}
	return (int_table);
}
