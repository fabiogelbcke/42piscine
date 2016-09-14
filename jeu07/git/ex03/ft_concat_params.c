/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 16:32:36 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/05 23:10:03 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			get_size(int argc, char **argv)
{
	int		i;
	int		counter;
	char	*ptr;

	i = 1;
	counter = 0;
	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr)
		{
			counter++;
			ptr++;
		}
		counter++;
		i++;
	}
	return (counter);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*string;
	char	*ptr;
	int		i;
	int		counter;

	string = malloc (get_size(argc, argv) * sizeof(char));
	i = 1;
	counter = 0;
	while (i < argc)
	{
		ptr = argv[i];
		while (*ptr)
		{
			string[counter] = *ptr;
			counter++;
			ptr++;
		}
		if (i != argc - 1)
			string[counter] = '\n';
		counter++;
		i++;
	}
	string[counter] = '\0';
	return (string);
}
