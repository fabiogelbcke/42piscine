/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 12:39:55 by fschuber          #+#    #+#             */
/*   Updated: 2014/08/29 23:41:38 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb2(void);

void ft_print_comb2(void)
{
	char n1='0';
	char n2='0';
	char n3;
	char n4;
	while (n1 + n2 != 2 * '9'){
		if (n2 =='9'){
			n3 = n1 + 1;
			n4 = '0';
		}
		else {
			n3 = n1;
			n4 = n2 + 1;
		}
		while (n3 != '9'+1 || n4 != '0'){
			ft_putchar(n1);
			ft_putchar(n2);
			ft_putchar(' ');
			ft_putchar(n3);
			ft_putchar(n4);
			ft_putchar(',');
			ft_putchar(' ');
			if (n4 == '9'){
				n3++;
				n4 = '0';
			}
			else{
				n4++;
			}
		}
		if (n2 == '9'){
			n1++;
			n2 = '0';
		}
		else{
			n2++;
		}
	}
}