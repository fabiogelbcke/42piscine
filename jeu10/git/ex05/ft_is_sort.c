/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 22:43:17 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/10 16:09:35 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
# DEFINE abs(x) ((x) >= 0 ? (x) : -1*(x))

int f(int a, int b)
{
	return (a - b);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int track;
	int i;
	int cvalue;

	i = 0;
	track = 0;
	while (i < length - 1)
	{
		cvalue = f(tab[i], tab[i + 1]);
		if (abs(track + cvalue) < abs(track - cvalue))
			return (0);
		track += f(tab[i], tab[i + 1]);
		i++;
	}
	return (1);
}

int main(void)
{
	int list[] = {1,2,3,44,55};

	printf("%d", ft_is_sort(list, 5, f));
	return (0);
}
