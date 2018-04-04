/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:44:59 by unli-yaw          #+#    #+#             */
/*   Updated: 2016/11/28 14:45:17 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*c;

	c = (unsigned char *)malloc(sizeof(unsigned char) * size);
	if (!c)
		return (NULL);
	ft_memset(c, 0, size);
	return (c);
}
