/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 18:05:47 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/11 19:56:14 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	write(1, "Tu tu tu tu ; tu tu tu tu\n", 26);
}

int		main(void)
{
	ft_generic();
	return (0);
}
