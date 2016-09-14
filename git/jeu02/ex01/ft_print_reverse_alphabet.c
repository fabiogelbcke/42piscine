/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 12:05:22 by fschuber          #+#    #+#             */
/*   Updated: 2014/08/29 23:34:13 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet()
{
    char letter;

	letter = 'z';
    while (letter >= 'a')
	{
        ft_putchar(letter);
        letter--;
    }
}
