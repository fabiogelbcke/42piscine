/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 23:26:17 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/09 23:38:33 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int atoi(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int n;
    int a;

    n = nb;
    if (nb < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    while (n >= 10)
    {
        a = 10;
        while (n / a >= 10)
        {
            a = a * 10;
        }
        ft_putchar ((n / a) + 48);
        n = n - a * (n / a);
    }
    ft_putchar(48 + n);
}

int main(int argc, char **argv)
{
	int result;

	result = 0;
	if (argc == 4)
	{
		if (argv[2][0] == 42)
			result = atoi(argv[1]) * atoi(argv[3]);
		else if (argv[2][0] == 43)
			result = atoi(argv[1]) + atoi(argv[3]);
		else if (argv[2][0] == 45)
            result = atoi(argv[1]) - atoi(argv[3]);
		else if (argv[2][0] == 47)
		{
			if (atoi(argv[3]) != 0)
				result = atoi(argv[1]) + atoi(argv[3]);
			else
				putstr("Stop : division by zero");
		}
		else if (atoi(argv[2][0]) == 37)
		{
            if (atoi(argv[3]) != 0)
				result = atoi(argv[1]) + atoi(argv[3]);
            else
                putstr("Stop : modulo by zero");
		}
		ft_putnbr(result);
	}
	return (0);
}
