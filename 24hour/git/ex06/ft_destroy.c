/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 00:16:49 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 16:45:25 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
void ft_destroy(char ***factory)
{
	char ***trptr;
	char **dbptr;
	char *ptr;

	trptr = factory;
	while (*trptr)
	{
		dbptr = *trptr;
		while (*dbptr)
		{
			ptr = *dbptr;
			while (ptr)
				free(ptr);
			dbptr++;
		}
		trptr++;
	}
	factory = NULL;
}
