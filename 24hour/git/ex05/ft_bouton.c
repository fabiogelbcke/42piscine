/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 23:42:09 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/11 23:51:48 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_middle_integer_table(int *tab, int size)
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
	return (tab[(size - 1) / 2]);
}

int ft_bouton(int i, int j, int k)
{
	int tab[3];

	tab[0] = i;
	tab[1] = j;
	tab[2] = k;
	return (ft_middle_integer_table(tab, 3));
}
