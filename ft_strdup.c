/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:05:39 by tswart            #+#    #+#             */
/*   Updated: 2019/06/05 12:26:31 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		n;

	n = 0;
	while (s1[n] != '\0')
		n++;
	if (!(s2 = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	n = 0;
	while (s1[n] != '\0')
	{
		s2[n] = s1[n];
		n++;
	}
	s2[n] = '\0';
	return (s2);
}
