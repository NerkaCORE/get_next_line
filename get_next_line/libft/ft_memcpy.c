/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:53:14 by unli-yaw          #+#    #+#             */
/*   Updated: 2016/11/20 17:23:30 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	char	*c;
	char	*m;
	size_t	i;

	i = 0;
	c = (char *)str2;
	m = (char *)str1;
	if (n == 0 || str1 == str2)
		return (str1);
	while (i < n)
	{
		m[i] = c[i];
		i++;
	}
	return (str1);
}
