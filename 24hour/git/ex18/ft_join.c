/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 12:03:53 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 13:07:20 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int get_size(char **tab, char *sep)
{
	int i;
	int j;
	int k;
	int size;

	i = 0;
	j = 0;
	k = 0;
	while (*sep)
	{
		sep++;
		k++;
	}
	while (tab[i] != 0)
	{
		while (tab[i][j++])
			size++;
		size += k;
		i++;
	}
//	size -= k;
	size++;
	return size;

}

char *ft_join(char **tab, char *sep)
{
	int i;
	int j;
//	char *ptr;
	char *joined;

	i = 0;
	j = 0;
	i = get_size(tab, sep);
	joined = malloc(i * sizeof(char));
	while (tab[i] != 0)
    {
//		ptr = sep;
//		while (tab[i][j])
//		{
//			*(joined) = tab[i][j];
//			joined++;
			j++;
//		}
//		while (*ptr && *joined)
		//	{
		//		*(joined) = *(ptr);
//			ptr++;
//		joined++;
			//	}
		i++;
	}
//	*joined = '\0';
	return joined;
	return sep;
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_join(argv, "hey!"));
	return (0);
}
