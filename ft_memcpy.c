/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:58:15 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/11/08 10:27:57 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*a;
	const char	*b;

	a = dest;
	b = src;
	
	while (len-- > 0)
		*(a++) = *(b++);
	return (dest);
}
