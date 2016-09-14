/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:02:42 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 22:26:20 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (*dest)
	{
		dest++;
		j++;
	}
	while (*src)
	{
		if (i < size - 1)
			*dest = *src;
		src++;
		dest++;
		i++;
		j++;
	}
	*dest = '\0';
	return (j);
}
