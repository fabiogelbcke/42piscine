/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 20:41:38 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/07 23:23:40 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void print_solution(char **table)
{
	int i;

	i = 0;
	while (i < 81)
	{
		ft_putchar(table[(i / 9) + 1][(i % 9)]);
		ft_putchar(' ');
		if (!((i + 1) % 9))
			ft_putchar ('\n');
		i++;
	}
}

int is_in_line (char *line, char number)
{
	int i ;

	i = 0;
//	printf("number = %c \n line = ", number);
	while(i < 9)
	{
		//	printf("%c", line[i]);
		if (line[i] == number)
			return 1;
		i++;
	}
//	printf("\n");
	return 0;
}

int is_in_column (char **table, char number, int column)
{
	int i;

	i = 1;
	while (i <= 9)
	{
//		printf ("number %c number its comparing to %c\n", number, table[i][column]);
		if (table[i][column] == number)
			return 1;
		i++;
	}
	return 0;
}

int is_in_square (char **table, char number, int line, int column)
{
	int i;
	int j;

	i = line - (line - 1)%3;
 	while (i < line - (line - 1)%3 + 3)
	{
		j = column - (column%3);
		while (j < column - (column%3) + 3)
		{
			//printf("table value : %c   number : %c", table[i][j], number);
			if (table[i][j] == number)
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}

int can_be_inserted(char **argv, char number, int line, int column)
{
	//printf("line %d column %d ", line, column);
	if (is_in_square( argv, number, line, column)
			|| is_in_line (argv[line], number)
				||is_in_column(argv, number, column))
		return 0;
	else
		return 1;
}

void sudoku(char **argv, int line, int column)
{
	print_solution(argv);
	ft_putchar('\n');
	char i;
	if (line == 9 && column == 8)
	{
		printf("whaaat");
		print_solution(argv);
		return;
	}
	if (argv[line][column] >= 49 && argv[line][column] <= 57)
	{
//		printf("1   line: %d, column :%d\n", line, column +1);
		if (column == 8)
		{
			if (line++ != 9)
			{
				column = 0;
				//	printf("hey");
				sudoku(argv, line, column);
			}
			else
			{
				print_solution(argv);
				printf("hey");
				return;
			}
		}
		else
		{
			column++;
			sudoku(argv, line, column);
		}
	}
	else
	{
		i = '1';
		while (i <= '9')
		{
			if (can_be_inserted(argv, i, line, column))
			{
				//argv[line][column] = '.';
//				printf("i = %c \n", i);
//				printf("line: %d, column :%d\n", line, column +1);
				argv[line][column] = i;
//				printf("argv  %c\n", argv[line][column]);
				sudoku(argv, line + ((column + 1) / 9), (column + 1) % 9);
//			if (line != 9 || column != 8)
//				argv[line][column] = '.';
			}
			i++;
		}
		if (line == 9 && column == 8)
		{
			printf("why");
			print_solution(argv);
		}
	}
}

int main(int argc, char **argv)
{
	sudoku( argv, 1, 0);
	return (0);
}
