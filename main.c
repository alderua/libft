/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:03:19 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/10/22 22:22:57 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int test_is_alpha()
{
	char	c;
	int		r;

	r = 0;
	c = 'G';
	r = ft_isalpha(c);

	if (r == 0)
		printf("No es un letraa");
	if (r == 1)
		printf("es una letra");

	return(0);
}

int main(void)
{
	int	test;

	test = 1;
	while (test != 0)
	{
	printf("Elige un test: ");
	printf("\n 0 - Salir del programa");
	printf("\n 1 - ft_isalpha\n");
	scanf("%d", &test);
		if (test == 0)
			printf("hasta luego crack");
		if (test == 1)
			test_is_alpha();
		else
			printf("Test inexistente, prueba de nuevo");
		printf("\n\n");
	}
	return(0);
}
