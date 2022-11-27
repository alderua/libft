/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 10:23:53 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/11/27 11:58:01 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				c;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	c = 0;
	while ((str1[c] != '\0' || str2[c] != '\0') && len-- > 0)
	{
		if (str1[c] > str2[c])
			return (1);
		if (str1[c] < str2[c])
			return (-1);
		c++;
	}	
	return (0);
}
