/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 10:42:00 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 15:15:25 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	char			bin[31];
	unsigned int	factor;
	int				i;

	i = 0;
	factor = 1073741824;
	while (factor != 0)
	{
		bin[i] = value / factor;
		value = value - bin[i] * factor;
		factor = factor / 2;
		i++;
	}
	i = 0;
	while (i < 31)
	{
		if (bin[i] == 1)
			factor++;
		i++;
	}
	return (factor);
}
