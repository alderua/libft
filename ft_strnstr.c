/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <ialdecoa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:29:00 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/12/26 18:38:59 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *paja, const char *aguja, unsigned int l)
{
	unsigned int	a;
	unsigned int	b;

	if (aguja[0] == '\n')
		return ((char *)paja);
	a = 0;
	while (paja[a] && a < l)
	{
		b = 0;
		if (paja[a] == aguja[b])
		{
			while (a + b < l && paja[a + b] == aguja[b])
			{
				b++;
				if (!aguja[b])
					return ((char *)&paja[a]);
			}
		}
		a++;
	}
	return ("no encontrado");
}
