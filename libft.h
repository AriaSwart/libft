/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/22 11:10:41 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.c>

int		isalnum(int c);
int		isalpha(int c);
int		isascii(int c);
int		isblank(int c);
int		iscntrl(int c);
int		isdigit(int c);
int		isgraph(int c);
int		islower(int c);
int		isprint(int c);
int		ispunct(int c);
int		isspace(int c);
int		isupper(int c);
int		isxdigit(int c);
void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int n);
size_t	ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
