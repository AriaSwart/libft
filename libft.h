/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/23 13:23:54 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int n);
size_t	ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strncpy(char *dst, const char *src, size_t n);
;char	*ft_strdup(const char *str1);

#endif
