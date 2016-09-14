/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 23:40:49 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 23:41:29 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *ptr;

	ptr = *begin_list1;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = begin_list2;
}
