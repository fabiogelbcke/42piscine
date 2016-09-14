/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 16:02:12 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 16:30:17 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		is_first_letter;
	char	*ptr;

	is_first_letter = 1;
	ptr = str;
	while (*ptr)
	{
		if ((*ptr <= 90 && *ptr >= 65) || (*ptr <= 122 && *ptr >= 97))
		{
			if (is_first_letter)
			{
				if (*ptr <= 122 && *ptr >= 97)
					*ptr -= 32;
				is_first_letter = 0;
			}
			else
				*ptr = (*ptr <= 90 && *ptr >= 65) ? *ptr + 32 : *ptr;
		}
		else
		{
			is_first_letter = (*ptr >= 48 && *ptr <= 57) ? 0 : 1;
		}
		ptr++;
	}
	return (str);
}
