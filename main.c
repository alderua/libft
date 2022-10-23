/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:03:19 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/10/23 02:11:15 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	test_is_alpha(void)
{
	char	c;
	int		r;

	r = 0;
	c = '1';
	r = ft_isalpha(c);
	if (r == 0)
		printf("No es un letra");
	if (r == 1)
		printf("es una letra");
	return (0);
}

int	test_is_digit(void)
{
	char	c;
	int		r;

	r = 0;
	c = '5';
	r = ft_isdigit(c);
	if (r == 0)
		printf("No es un numero");
	if (r == 1)
		printf("es un numero");
	return (0);
}

int	test_is_alnum(void)
{
	char	c;
	int		r;

	r = 0;
	c = '*';
	r = ft_isalnum(c);
	if (r == 0)
		printf("No es un caracter valido");
	if (r == 1)
		printf("es un caracter valido");
	return (0);
}

int	test_is_ascii(void)
{
	char	c;
	int		r;

	r = 0;
	c = '*';
	r = ft_isascii(c);
	if (r == 0)
		printf("No es un caracter valido");
	if (r == 1)
		printf("es un caracter valido");
	return (0);
}

int	main(void)
{
	int	test;

	test = 1;
	while (test != 0)
	{
		printf("Elige un test: ");
		printf("\n 0 - Salir del programa");
		printf("\n 1 - ft_isalpha");
		printf("\n 2 - ft_isdigit");
		printf("\n 3 - ft_isalnum");
		printf("\n 4 - ft_isascii\n");	
		scanf("%d", &test);
		if (test >= 0 && test <= 4)
		{
			if (test == 0)
				printf("hasta luego crack");
			if (test == 1)
				test_is_alpha();
			if (test == 2)
				test_is_digit();
			if (test == 3)
				test_is_alnum();
			if (test == 4)
				test_is_ascii();
		}
		else
			printf("Test inexistente, prueba de nuevo");
		printf("\n\n");
	}
	return (0);
}
