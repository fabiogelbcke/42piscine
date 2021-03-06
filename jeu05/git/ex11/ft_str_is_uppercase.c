/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 17:29:45 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 17:51:49 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 65 || *str > 90)
			return (0);
		str++;
	}
	return (1);
}
