/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschuber <fschuber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 09:57:59 by fschuber          #+#    #+#             */
/*   Updated: 2014/09/12 10:27:28 by fschuber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

typedef int		t_bool;

# define TRUE 1
# define FALSE 0
# define OPEN 1
# define CLOSE 0

typedef struct	s_door
{
	t_bool	state;
}				t_door;

t_bool			open_door(t_door *door);

t_bool			close_door(t_door *door);

t_bool			is_door_open(t_door *door);

t_bool			is_door_close(t_door *door);

#endif
