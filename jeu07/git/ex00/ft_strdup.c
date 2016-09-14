/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 07:37:04 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/05 23:23:10 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	char	*returnpointer;
	char	*ptr;

	i = 0;
	ptr = src;
	while (*(src++))
		i++;
	copy = (char*)malloc((i + 1) * sizeof(char));
	returnpointer = copy;
	while (*ptr)
		*(copy++) = *(ptr++);
	*copy = '\0';
	return (returnpointer);
}
