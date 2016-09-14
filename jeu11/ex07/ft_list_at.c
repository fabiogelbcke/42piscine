/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 20:43:56 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 23:13:34 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i;

	i = 0;
	if (nbr == 0)
		return (NULL);
	while (1)
	{
		i++;
		if (i == nbr)
			return (begin_list);
		if (begin_list->next == NULL)
			return (NULL);
		begin_list = begin_list->next;
	}
}
