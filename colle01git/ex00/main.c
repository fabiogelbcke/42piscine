/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubalest <jubalest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 11:00:39 by jubalest          #+#    #+#             */
/*   Updated: 2014/09/07 16:54:01 by jubalest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	char	*error;

	error = (char *)malloc(8 * sizeof(char));
	if (error == NULL)
		return (-1);
	error = "Erreur\n";
	if ((argc != 10) || (ft_check_argv(argv) != 9))
	{
		ft_putstr(error);
	}
	return (0);
}
