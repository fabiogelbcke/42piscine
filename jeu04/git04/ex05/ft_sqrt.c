/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 11:59:15 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 23:13:06 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
	{
		if (((i + 1) * (i + 1)) == (1.0 * (1 + i) * (i + 1)))
			i++;
		else
			return (0);
	}
	if (i * i == nb)
		return (i);
	return (0);
}
