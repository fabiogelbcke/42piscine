/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 23:30:15 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 23:39:35 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp()))
{
	t_list *ptr1;
	t_list *ptr2;

	ptr1 = *begin_list;
	if ((*cmp)(ptr1->data, data_ref))
	{
		*begin_list = ptr1->next;
		free(ptr1);
		ft_list_remove_if(begin_list, data_ref, cmp);
		return ;
	}
	while (ptr1 != NULL)
	{
		if ((*cmp)(ptr1->data, data_ref))
		{
			ptr2->next = ptr1->next;
			free(ptr1);
			ptr1 = ptr2->next;
		}
		else
		{
			ptr2 = ptr1;
			ptr1 = ptr1->next;
		}
	}
}
