/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/31 15:39:11 by fschuber          #+#    #+#             */
/*   Updated: 2014/08/31 23:35:03 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		line_size(int section, int line)
{
	int i;
	int increment;
	int size;

	increment = 10;
	i = 2;
	size = 3;
	while (i <= section)
	{
		size += increment;
		if (i % 2 == 0)
			increment += 2;
		else
			increment += 4;
		i++;
	}
	if (line >= 1)
		size += (line) * 2;
	return (size);
}

void	print_line(int section, int basesize, int line, int lastsection)
{
	int i;
	int linesize;

	i = 0;
	linesize = line_size(section, line);
	while (i < basesize / 2 + 1 + linesize / 2)
	{
		if (i == basesize / 2 - linesize / 2)
			ft_putchar('/');
		else if (i == (basesize / 2 + (section - 1) / 2 - 1)
					&& line == (section + 1 - (section - 1) / 2)
					&& (section > 4) && (section == lastsection))
			ft_putchar('$');
		else if (i <= basesize / 2 + (section - 1) / 2 && section == lastsection
					&& i >= (basesize / 2 - (section - 1) / 2)
					&& line >= section + 1 - ((section - 1) / 2) * 2)
			ft_putchar ('|');
		else if (i == basesize / 2 + linesize / 2)
			ft_putchar ('\\');
		else if (i <= basesize / 2 - linesize / 2)
			ft_putchar(' ');
		else
			ft_putchar ('*');
		i++;
	}
}

void	print_section(int section, int basesize, int size)
{
	int line;
	int i;
	int linesize;

	i = 0;
	line = 0;
	while (line < section + 2)
	{
		print_line(section, basesize, line, size);
		ft_putchar('\n');
		line++;
	}
}

void	sastantua(int size)
{
	int section;
	int row;
	int basesize;

	section = 1;
	row = 0;
	basesize = line_size(size, size + 2);
	while (section <= size)
	{
		print_section(section, basesize, size);
		section++;
	}
}
