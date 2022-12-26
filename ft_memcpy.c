/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:58:15 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/12/26 21:02:01 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*a;
	const char	*b;

	a = dest;
	b = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (len-- > 0)
		*(a++) = *(b++);
	return (dest);
}
