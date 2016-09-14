/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 19:03:37 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/11 23:00:48 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		convert_time(int hour)
{
	if (hour == 0 || hour == 12 || hour == 24)
		return (12);
	else
		return (hour % 12);
}

char	*am_pm(int hour)
{
	if ((hour >= 0 && hour <= 11) || hour >= 24)
		return ("A.M.");
	return ("P.M.");
}

void	ft_takes_place(int hour)
{
	if (hour > 25)
		printf("invalid input");
	else
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
				convert_time(hour), am_pm(hour),
					convert_time(hour + 1), am_pm(hour + 1));
}
