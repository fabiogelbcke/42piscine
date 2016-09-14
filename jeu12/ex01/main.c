/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 18:37:21 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/11 18:58:22 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void cat()
{
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 0)
		print_stdin();
	else
	{
		while (i < argc)
		{
			if (argv[i] == "-")
				print_stdin();
			else
				print_file(argv[i]);
		}
	}
}
