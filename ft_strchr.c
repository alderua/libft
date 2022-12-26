/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:56:44 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/12/26 20:51:14 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	l;
	size_t	i;

	i = 0;
	l = ft_strlen(s);
	while (i <= l)
	{
		if (*s == (unsigned char)c)
			return ((char *)(s));
		s++;
		i++;
	}
	return (NULL);
}
