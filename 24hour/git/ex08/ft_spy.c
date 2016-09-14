/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 09:22:43 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 09:32:07 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int			cmp(char *str1, char *str2)
{
	while (*str2 == ' ')
		str2++;
	while (*str1)
	{
		if (!*str2)
			return (0);
		if (*str1 != *str2 && (*str1 - 32) != *str2)
			return (0);
		str1++;
		str2++;
	}
	while (*str2)
	{
		if (*str2 != ' ')
			return (0);
		str2++;
	}
	return (1);
}

int			is_alert(char *str)
{
	return (cmp("attack", str) + cmp("president", str) + cmp("powers", str));
}

void		check_alert(int ac, char **av)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i < ac)
	{
		result += is_alert(av[i]);
		i++;
	}
	if (result > 0)
		write(1, "Alert!!!\n", 9);
}

int			main(int argc, char **argv)
{
	check_alert(argc, argv);
	return (0);
}
