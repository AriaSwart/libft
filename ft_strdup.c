/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:05:39 by tswart            #+#    #+#             */
/*   Updated: 2019/05/23 13:25:24 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		i;

	i = 0;
	while (str1[i] != '\0')
		i++;
	str2 = (char *)malloc(sizeof(str1) * i + 1);
	while (i >= 0)
	{
		str2[i] = str1[i];
		i--;
	}
	return (str2);
}
