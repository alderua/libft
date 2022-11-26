/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 21:04:59 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/11/26 21:57:24 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int len)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (len-- > 0)
	{
		if (*str == ch)
			return (str);
		str++;
	}	
	return (0);
}
