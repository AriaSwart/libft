/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:16:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/21 11:25:53 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int n);
size_t	ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
