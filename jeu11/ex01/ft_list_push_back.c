/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 11:08:32 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 22:33:22 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*new;

	elem = *begin_list;
	while (elem->next != NULL)
		elem = elem->next;
	new = ft_create_elem(data);
	elem->next = new;
}
