/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <ialdecoa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 06:30:31 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/12/27 00:19:02 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	l;
	char	*i;

	i = NULL;
	l = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + l));
	while (l + 1 > 0)
	{
		if (*(s + l) == (unsigned char)c)
		{
			i = (char *)(s + l);
			return (i);
		}
		l--;
	}
	return (0);
}
