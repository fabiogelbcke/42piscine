/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 13:41:41 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 23:19:08 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int guess;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0)
		return (0);
	guess = 3;
	while (guess * guess < nb)
	{
		if (nb % guess == 0)
			return (0);
		if (((guess + 1) * (guess + 1)) == (1.0 * (guess + 1) * (guess + 1)))
			guess += 2;
		else
			return (0);
	}
	return (1);
}
