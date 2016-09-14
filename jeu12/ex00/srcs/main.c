/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 17:15:02 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/11 23:05:46 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_file(char *name)
{
	int		file;
	char	character[1];

	file = open(name, O_RDONLY);
	while (read(file, character, 1) > 0)
	{
		ft_putchar(*character);
	}
}

int			main (int argc, char **argv)
{
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else if (argc == 1)
		write(1, "File name missing.\n", 19);
	else
		print_file(argv[1]);
	return (0);
}
