/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dupdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 09:19:51 by tswart            #+#    #+#             */
/*   Updated: 2019/06/26 09:39:58 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_dupdel(char **str)
{
	char *tmp;

	tmp = ft_strdup(*str);
	ft_strdel(str);
	return (tmp);
}
