/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:13:01 by tswart            #+#    #+#             */
/*   Updated: 2019/05/27 13:15:17 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = (char *)malloc(sizeof(new) * ft_strlen((char *)s));
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
