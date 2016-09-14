/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 21:05:47 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/08 23:27:23 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	int n;
	int a;

	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	while (n >= 10)
	{
		a = 10;
		while (n / a >= 10)
		{
			a = a * 10;
		}
		ft_putchar ((n / a) + 48);
		n = n - a * (n / a);
	}
	ft_putchar(48 + n);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].tab)
	{
		j = 0;
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		while (par[i].tab[j])
		{
			ft_putstr(par[i].tab[j++]);
			ft_putchar('\n');
		}
		i++;
	}
}
