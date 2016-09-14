/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 12:55:38 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 22:59:39 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void			ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

tlist			*ft_list_push_params(int ac, char **av)
{
	int			i;
	tlist		*begin;

	i = 1;
	begin = ft_create_elem(&av[0]);
	while (i < ac)
	{
		ft_list_push_front(&av[i]);
		i++;
	}
	return (begin);
}
