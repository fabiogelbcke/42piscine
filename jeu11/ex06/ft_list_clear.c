/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 20:40:32 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 23:10:19 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void ft_list_clear(t_list **begin_list)
{
	t_list *ptr;
	t_list *ptr2;

	ptr = *begin_list;
	while (ptr->next != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		ptr2->next = NULL;
		free(ptr2);
	}
	*begin_list = NULL;
}
