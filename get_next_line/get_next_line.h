/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 17:01:28 by unli-yaw          #+#    #+#             */
/*   Updated: 2017/01/15 17:03:46 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./libft/libft.h"

# define BUFF_SIZE 16

# define KGRN  "\x1B[32m"
# define KWHT  "\x1B[37m"

typedef struct		s_lst
{
	int				fd;
	char			*reste;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(int fd, char **line);

#endif
