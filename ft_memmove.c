/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:58:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/27 10:10:58 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t n;

	if ((char *)dst <= (const char *)src)
	{
		n = 0;
		while (++n < len)
			((char *)dst)[n] = ((const char *)src)[n];
	}
	else
	{
		n = len;
		while (n-- > 0)
			((char *)dst)[n] = ((const char *)src)[n];
	}
	return (dst);
}
