/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:31:07 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 22:41:31 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*src)
	{
		if (i < size - 1)
		{
			*dest = *src;
			dest++;
		}
		i++;
		src++;
	}
	if (size > 0)
		*dest = '\0';
	return (i);
}
