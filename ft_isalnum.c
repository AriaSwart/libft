/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:33:45 by tswart            #+#    #+#             */
/*   Updated: 2019/05/21 16:50:07 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha.c"
#include "ft_isdigit.c"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (c);
	}
	else
		return (0);
}
