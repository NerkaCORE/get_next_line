/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:22:59 by unli-yaw          #+#    #+#             */
/*   Updated: 2016/11/30 18:06:45 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dest = dest;
	ptr_src = src;
	if (n == 0)
		return (dest);
	i = (ptr_dest < ptr_src) ? 0 : n - 1;
	while (n)
	{
		ptr_dest[i] = ptr_src[i];
		i = (ptr_dest < ptr_src) ? i + 1 : i - 1;
		n--;
	}
	return (ptr_dest);
}
