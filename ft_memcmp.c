/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:23:53 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/12/27 01:14:28 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (len == 0)
		return (0);
	while (len - 1 > 0 && *ss1 == *ss2)
	{
		ss1++;
		ss2++;
		len--;
	}
	return (*ss1 - *ss2);
}
