/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:49:59 by tswart            #+#    #+#             */
/*   Updated: 2019/05/20 09:57:17 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
