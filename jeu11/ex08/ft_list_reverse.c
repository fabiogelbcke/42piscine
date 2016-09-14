/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 20:52:15 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 22:06:59 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_reverse(t_list **begin_list)
{
	t_list *ptr1;
	t_list *ptr2;
	t_list *ptr3;

	ptr1 = *begin_list;
	ptr2 = ptr1->next;
	ptr3 = ptr2->next;
	ptr1->next = NULL;
	while (ptr3->next != NULL)
	{
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr3;
		ptr3 = ptr3->next;
	}
	ptr2->next = ptr1;
	ptr3->next = ptr2;
	*begin_list = ptr3;
}
