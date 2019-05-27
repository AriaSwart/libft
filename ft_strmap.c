/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:11:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/27 13:14:43 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(sizeof(new) * ft_strlen((char *)s));
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
