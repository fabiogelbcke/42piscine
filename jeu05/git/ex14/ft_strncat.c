/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 18:09:03 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 21:29:12 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*destptr;
	int		i;

	destptr = dest;
	i = 0;
	while (*destptr)
		destptr++;
	while (i < nb && *src)
	{
		*destptr = *src;
		src++;
		destptr++;
		i++;
	}
	if (i < nb)
		*destptr = '\0';
	return (dest);
}
