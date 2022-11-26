/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialdecoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:24:16 by ialdecoa          #+#    #+#             */
/*   Updated: 2022/11/26 21:37:29 by ialdecoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_isalpha(int);
int		ft_isdigit(int);
int		ft_isalnum(int);
int		ft_isascii(int);
int		ft_isprint(int);
size_t	ft_strlen(char[]);
void	*ft_memset(char[], int, int);
void	ft_bzero(char[], int);
void	*ft_memcpy(char[],char[], int);
void	*ft_memmove(char[],char[], int);
int		ft_toupper(char);
int		ft_tolower(char);
char	*ft_strchr(char[], int);
char	*ft_strrchr(char[], int);
int		ft_strncmp(char[], char[], size_t);
void	*ft_memchr(char[], int, size_t);
