/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/07 00:39:54 by plavaux           #+#    #+#             */
/*   Updated: 2014/09/08 15:39:41 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_BOOLEAN_H
# define	FT_BOOLEAN_H

# include	<unistd.h>
# define	TRUE		1
# define	FALSE		0
# define	SUCCESS		0
# define	EVEN_MSG	"I have a pair number of arguments.\n"
# define	ODD_MSG		"I have an impair number of arguments.\n"
# define	EVEN(x)		(!((x) % 2))

typedef	int	t_bool;

#endif