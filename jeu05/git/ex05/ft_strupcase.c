/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 15:33:31 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 15:52:20 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
			*ptr = *ptr - 32;
		ptr++;
	}
	return (str);
}