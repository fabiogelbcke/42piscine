/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 14:16:16 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/01 15:18:35 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		ft_putchar (*ptr);
		ptr++;
	}
}
