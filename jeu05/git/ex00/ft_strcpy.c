/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 10:59:05 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 11:29:47 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *iterptr;

	iterptr = dest;
	while (*src)
	{
		*iterptr = *src;
		iterptr++;
		src++;
	}
	*iterptr = '\0';
	return (dest);
}
