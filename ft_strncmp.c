/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:33:53 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/12/27 00:58:21 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*ss1 != '\0' || *ss2 != '\0') && (n - 1 > 0) && (*ss1 == *ss2))
	{
		ss1++;
		ss2++;
		n--;
	}
	return (*ss1 - *ss2);
}
