/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 08:44:43 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/05 23:21:37 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *ptr;
	int *array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (0);
	i = min;
	ptr = array;
	while (i < max)
	{
		*ptr = i;
		i++;
		ptr++;
	}
	*range = array;
	return (max - min);
}
