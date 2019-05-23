/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:36:23 by tswart            #+#    #+#             */
/*   Updated: 2019/05/23 11:18:58 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int c)
{
	if (c == 32 || (9 <= c && c <= 13))
	{
		return (c);
	}
	else
		return (0);
}

int			ft_atoi(char *nbr)
{
	int i;
	int sign;
	int n;

	sign = 1;
	i = 0;
	n = 0;
	while (ft_isspace(nbr[i]))
		i++;
	if (!nbr)
		return (0);
	if (nbr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nbr[i] == '+')
		i++;
	while ((nbr[i] != '\0') && ('0' <= nbr[i] && nbr[i] <= '9'))
	{
		n = (n * 10) + (nbr[i] - 48);
		i++;
	}
	return (n * sign);
}
