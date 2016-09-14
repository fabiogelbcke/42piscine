/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/03 22:47:13 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/03 23:32:07 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			convert(char *str, char *base, int size)
{
	int		j;
	int		factor;
	int		result;
	char	*ptr;

	factor = 1;
	result = 0;
	while (*str)
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == *str)
				break ;
			j++;
		}
		result = result + (factor * j);
		factor = factor * size;
		str++;
	}
	return (result);
}

int			ft_atoi_base(char *str, char *base)
{
	int		basesize;
	char	*ptr;
	int		number;
	int		result;

	basesize = 0;
	ptr = base;
	while (*ptr)
	{
		basesize++;
		ptr++;
	}
	return (convert(str, base, basesize));
}
