/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   project.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/14 03:49:50 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/14 08:24:59 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int get_sizes(char *image, int which)
{
	char *ptr;
	int x;
	int y;
	int answer;

	x = 0;
	y = 0;
	ptr = image;
	while(*(ptr++) != 10)
		x++;
	ptr = image;
	while (*ptr)
	{
		if (*ptr == 10)
			y++;
		ptr++;
	}
	return which ? y : x;
}

int which_colle(char *image)
{
	char *ptr;

	ptr = image;
	if (*ptr == 'o')
	{
		if (*(ptr + 1) == '-' || (*(ptr + 1) == 10 && (*(ptr + 2) == '|' 
													   || *(ptr + 2) == 'o')) || !*(ptr + 1))
			return 0;
		else
			return 69;
	}
	if (*ptr == '/')
	{
		if (*(ptr + 1) == '*' || *(ptr + 2) == '*' || *(ptr + 2) == '\\' || !*(ptr+1))
            return 1;
		else
			return 69;
	}
	if(*ptr == 'A')
	{
		if (!*(ptr+1))
			return 9;
		while (*(ptr++) != 10);
		if (*(ptr - 1) == 'A')
			return 2;
		else if (*(ptr - 1) == 'C')
		{
			if (get_sizes(buffer, 1) == 1)
				return 7;
			while (*(ptr++));

			
}

int compare

int main (int argc, char **argv)
{
	int i;
	char buffer[2000];

	i = 0;
	read(0, buffer, 2000);
	while(buffer[i])
		printf("%d ", buffer[i++]);
	printf("\n%d %d", get_sizes(buffer, 0), get_sizes(buffer, 1));
	return 0;
}
