/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:16:51 by unli-yaw          #+#    #+#             */
/*   Updated: 2016/11/28 15:17:11 by unli-yaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		cpy;
	int		neg;
	int		i;

	cpy = n;
	neg = (n < 0 ? -1 : 1);
	i = 1 + (n < 0);
	while (n /= 10)
		i++;
	if (!(str = ft_strnew(i)))
		return (NULL);
	str[i--] = '\0';
	str[i--] = neg * (cpy % 10) + 48;
	while (cpy /= 10)
		str[i--] = neg * (cpy % 10) + 48;
	if (neg < 0)
		str[i] = '-';
	return (str);
}
