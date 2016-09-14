/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubalest <jubalest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 11:19:32 by jubalest          #+#    #+#             */
/*   Updated: 2014/09/07 15:35:25 by jubalest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <stdio.h>

int		ft_check_argv(char **kwargs)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (i < 10)
	{
		if (ft_strlen(kwargs[i]) == 9)
			n++;
		i++;
	}
	return (n);
}

int		ft_check_type(char c)
{
	int	i;

	i = 0;
	if (((c > 48) && (c < 58)) || (c == 46))
		i++;
	return (i);
}
