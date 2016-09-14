/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/01 23:31:14 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 22:39:55 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int result;
	int counter;

	counter = 0;
	result = 1;
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	while (counter < power)
	{
		result *= nb;
		counter++;
	}
	return (result);
}
