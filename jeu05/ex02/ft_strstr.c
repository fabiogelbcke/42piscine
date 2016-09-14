/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 12:09:52 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 12:24:20 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	char *strptr;
	char *to_find_ptr;

	if (!*to_find)
		return (str);
	while (*str)
	{
		to_find_ptr = to_find;
		if (*str == *to_find)
		{
			strptr = str;
			while (*strptr == *to_find_ptr)
			{
				strptr++;
				to_find_ptr++;
				if (!*to_find_ptr)
					return (str);
			}
		}
		str++;
	}
	return (NULL);
}
