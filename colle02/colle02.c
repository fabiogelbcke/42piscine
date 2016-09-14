/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 00:08:31 by plavaux           #+#    #+#             */
/*   Updated: 2014/08/31 00:08:35 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int j, int x, char start, char end)
{
	if (j == 0)
		ft_putchar(start);
	else if (j == x - 1)
		ft_putchar(end);
	else
		ft_putchar('B');
}

void	output_colle(int i, int x, int y)
{
	int j;

	j = 0;
	while (j < x)
	{
		if (i == 0)
			ft_print(j, x, 'A', 'A');
		else if (i == y - 1)
			ft_print(j, x, 'C', 'C');
		else
		{
			if ((j == 0) || (j == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		j++;
	}
}

void	colle(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
	}
	else
	{
		while (i < y)
		{
			output_colle(i, x, y);
			ft_putchar('\n');
			i++;
		}
	}
}
