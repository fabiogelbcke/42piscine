/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 03:07:05 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 03:52:05 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->data = data;
	return (new);
}
