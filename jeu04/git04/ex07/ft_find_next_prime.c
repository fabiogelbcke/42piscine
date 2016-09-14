/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 14:35:18 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 23:25:07 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int guess;

	if (nb <= 1)
		return (3);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	guess = 3;
	while (guess * guess < nb)
	{
		if (nb % guess == 0)
			return (ft_find_next_prime(nb + 2));
		if ((guess + 1) * (guess + 1) == 1.0 * (guess + 1) * (guess + 1))
			guess += 2;
		else if (nb + 2 <= 2147483647)
			return (ft_find_next_prime(nb + 2));
		else
			return (0);
	}
	return (nb);
}
