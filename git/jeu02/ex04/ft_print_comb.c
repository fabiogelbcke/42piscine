/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 12:13:54 by fschuber          #+#    #+#             */
/*   Updated: 2014/08/29 23:39:49 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb (void);

void ft_print_comb(void)
{
	char char1=48;
	char char2=49;
	char char3=50;

	while (char1 < 56){
		char2 = char1 + 1;
		while (char2 < 57){
			char3 = char2 + 1;
			while (char3 != 58){
				ft_putchar(char1);
				ft_putchar(char2);
				ft_putchar(char3);
				if (char1 + char2 + char3 != '7' + '8' + '9'){
					ft_putchar(',');
					ft_putchar(' ');
				}
				++char3;
			}
			++char2;
		}
		++char1;
	}
}
