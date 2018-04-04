/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:05:21 by unli-yaw          #+#    #+#             */
/*   Updated: 2016/11/20 17:24:12 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*t;
	char	*m;
	size_t	i;

	m = (char *)src;
	t = (char *)dest;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		t[i] = m[i];
		if (m[i] == c)
			return (t + i + 1);
		i++;
	}
	return (NULL);
}
