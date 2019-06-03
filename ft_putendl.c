/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:50:30 by tswart            #+#    #+#             */
/*   Updated: 2019/05/24 13:09:40 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char *str)
{
	int i;

	i = 0;
	if (str)
	{
	    while (str[i] != '\0')
	    {
		ft_putchar(str[i]);
		i++;
	    }
	    ft_putchar('\n');
	}
}
