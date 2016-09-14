/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/02 15:05:39 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/02 22:10:42 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void increase_availability(int row, int col, int table[8][8])
{
    int i;
    int j;

    i;
    j=1;
    while (i < 8)
    {
		table[i][col]--;
        if (col+i <= 7 && i > row)
			table[i][col+j]--;
        if (col-i >=0 && i > row)
            table[i][col+j]--;
		if (i>row)
			j++;
        i++;
    }
}

void decrease_availability(int row, int col, int table[8][8])
{
	int i;
	int j;
	
	i=0;
	j=1;
	table[row][col] ++;
		table[row+1][col]++;
	while (i < 8)
	{
		table[i][col]++;
		if (col+i <= 7 && i > row)
			table[i][col+j]++;
		if (col-i >=0 && i > row)
			table[i][col-j]++;
		i++;
		if (i>row)
			j++;
	}
}
int insert_new_queen(int row, int forbiddenspots[8][8], int *answer)
{
	int i;
	int available;
	int column;

	i = 0;
	available = 0;
	while (i < 8)
	{
		if (forbiddenspots[row][i]==0)
		{ 
//			printf("%d %d\n", row, i);
			if (row == 7)
				*answer= *answer + 1;
			else
			{
				printf("a");
				decrease_availability(row, i, forbiddenspots);
				insert_new_queen( row + 1, forbiddenspots, answer);
				increase_availability(row, i, forbiddenspots);
			}
		}
		i++;
	}
	if (row == 7)
		return available;
}

int ft_eight_queens_puzzle(void)
{
	int forbiddenspots[8][8];
	int i;
	int j;
	int answer;
	answer = 0;
	while (i<8)
	{
		while (j<8)
		{
			forbiddenspots[i][j] = 0;
			j++;
		}
		i++;
	}
	insert_new_queen(0, forbiddenspots, &answer);
	return answer;
}

int main()
{
	printf("%d", ft_eight_queens_puzzle());
	return(0);
}
