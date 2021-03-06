/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/29 13:00:54 by fschuber          #+#    #+#             */
/*   Updated: 2014/08/29 13:30:58 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar (char);
void ft_putnbr(int nb);

void ft_putchar (char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb){
	int n = nb;
	if (nb<0){
		ft_putchar('-');
		n = n*-1;
	}
	while (n>10){
		int a=10;
		while (n/a >= 10){
			a = a*10;
		}
		ft_putchar ((n/a)+48);
		n = n- a*(n/a);
	}
	if (n!=0) {
		ft_putchar(48+n);
	}
}



int main (){

	ft_putnbr(39875);
	ft_putnbr(-789);
	ft_putnbr(3);
	return 1;

}

