/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 00:35:14 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 22:56:26 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci (int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 45)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
