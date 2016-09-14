/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 14:56:51 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/01 18:49:47 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tab[i] = tab[i] ^ tab[i + 1];
			tab[i + 1] = tab[i] ^ tab[i + 1];
			tab[i] = tab[i] ^ tab[i + 1];
			i = 0;
		}
		else
			i++;
	}
}
