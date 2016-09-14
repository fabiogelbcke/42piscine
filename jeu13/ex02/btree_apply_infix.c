/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 23:15:22 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 23:26:34 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != 0)
	{
		btree_apply_infix(root->left, applyf);
		(*applyf)(root->item);
		btree_apply_infix(root->right, applyf);
	}
}
