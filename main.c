/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:03:19 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/10/23 10:52:33 by ialdecoa         ###   ########.fr       */
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
		printf("%c No es un letra", c);
	if (r == 1)
		printf("%c es una letra", c);
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
		printf("%c No es un numero", c);
	if (r == 1)
		printf("%c es un numero", c);
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
		printf("%c No es un caracter valido", c);
	if (r == 1)
		printf("%c es un caracter valido", c);
	return (0);
}

int	test_is_ascii(void)
{
	char	c;
	int		r;

	r = 0;
	c = 'u';
	r = ft_isascii(c);
	if (r == 0)
		printf("%c No es un caracter valido", c);
	if (r == 1)
		printf("%c es un caracter valido", c);
	return (0);
}

int	test_is_print(void)
{
	char	c;
	int		r;

	r = 0;
	c = ' ';
	r = ft_isprint(c);
	if (r == 0)
		printf("%c No es un caracter valido", c);
	if (r == 1)
		printf("%c es un caracter valido", c);
	return (0);
}

int test_strlen(void)
{
	char	len[] = "123456789";
	int	l = 0;

	l = ft_strlen(len);
	if (l == 0)
		printf("No hay caracteres");
	if (l > 0)
		printf("%d es la longitud de la cadena", l);
	return(0);
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
		printf("\n 4 - ft_isascii");	
		printf("\n 5 - ft_isprint");
		printf("\n 6 - ft_strlen\n");
		scanf("%d", &test);
		if (test >= 0 && test <= 6)
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
			if (test == 5)
				test_is_print();
			if (test == 6)
				test_strlen();
		}
		else
			printf("Test inexistente, prueba de nuevo");
		printf("\n\n");
	}
	return (0);
}
