/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:58:15 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/11/21 05:29:30 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (len-- > 0)
			*(d++) = *(s++);
	return (dest);
}
