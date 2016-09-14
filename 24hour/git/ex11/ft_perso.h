/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 09:38:49 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 09:50:38 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_AUSTIN_POWERS "Save Austin Powers"

typedef	struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;

#endif
