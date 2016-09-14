/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:01:04 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 18:05:42 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	char *destptr;

	destptr = dest;
	while (*destptr)
		destptr++;
	while (*src)
	{
		*destptr = *src;
		destptr++;
		src++;
	}
	*destptr = '\0';
	return (dest);
}
