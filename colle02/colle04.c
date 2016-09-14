/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 21:59:21 by plavaux           #+#    #+#             */
/*   Updated: 2014/08/30 21:59:49 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int col, int x, char start, char last)
{
	if (col == 0)
		ft_putchar(start);
	else if (col == x - 1)
		ft_putchar(last);
	else
		ft_putchar('B');
}

void	output_colle(int row, int x, int y)
{
	int col;

	col = 0;
	while (col < x)
	{
		if (row == 0)
			ft_print(col, x, 'A', 'C');
		else if (row == y - 1)
			ft_print(col, x, 'C', 'A');
		else
		{
			if ((col == 0) || (col == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		col++;
	}
}

void	colle(int x, int y)
{
	int row;

	row = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
	}
	else
	{
		while (row < y)
		{
			output_colle(row, x, y);
			ft_putchar('\n');
			row++;
		}
	}
}
