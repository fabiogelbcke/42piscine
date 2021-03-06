/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 15:55:41 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 15:59:41 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 65 && *ptr <= 90)
			*ptr += 32;
		ptr++;
	}
	return (str);
}
