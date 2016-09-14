/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 19:24:10 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 22:26:14 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		if (factorial * i == 1.0 * factorial * i)
		{
			factorial = factorial * i;
			i++;
			printf("%d\n", factorial);
		}
		else
		{
			return (0);
		}
	}
	if (nb < 0)
		return (0);
	else
		return (factorial);
}
