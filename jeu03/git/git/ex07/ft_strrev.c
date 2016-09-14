/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/30 14:45:24 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/01 18:38:02 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *ft_strrev(char *str)
{
	char *ptr;
	char *ptrrev;

	ptrrev = str;
	ptr = str;
	while (*ptrrev)
	{
		ptrrev++;
	}
	ptrrev--;
	while (ptrrev > ptr)
	{
		*ptrrev = *ptrrev ^ *ptr;
		*ptr = *ptrrev ^ *ptr;
		*ptrrev = *ptrrev ^ *ptr;
		ptr++;
		ptrrev--;
	}
	return (str);
}

int main()
{
	char *aew = malloc(sizeof(char) * 4);
	aew[0] = 'a';
	aew[1] = 'b';
	aew[2] = 'c';
	aew[3] = '\0';
	write(1, ft_strrev("aew"), 4);
}
