/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 01:05:40 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 09:21:11 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		base = base / 2;
	else
		base = (3 * base) + 1;
	return (1 + ft_collatz_conjecture(base));
}
