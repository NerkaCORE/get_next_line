/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:08:37 by unli-yaw          #+#    #+#             */
/*   Updated: 2016/11/28 16:09:07 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memdup(const void *s, size_t n)
{
	void	*new;

	if ((new = malloc(sizeof(unsigned char) * n)) == NULL)
		return (NULL);
	ft_memcpy(new, s, n);
	return (new);
}
