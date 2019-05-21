/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:55:29 by tswart            #+#    #+#             */
/*   Updated: 2019/05/21 15:35:18 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

int		ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
	{
		return (c);
	}
	else
		return (0);
}

int		ft_isupper(int c)
{
	if (65 <= c && c <= 90)
	{
		return (c);
	}
	else
		return (0);
}
int		ft_islower(int c);
{
	if (97 <= c && c <= 122)
	{
		return (c);
	}
	else
		return (0);
}

int		ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
	{
		return (c);
	}
	else
		return (0);
}

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (c);
	}
	else
		return (0);
}

int		ft_ispunct(int c)
{
	if ((33 <= c && c <= 126) && !(isalnum(c)))
	{
		return (c);
	}
	else
		return (0);
}

int		ft_isgraph(int c)
{
	if (33 <= c && c <= 126)
	{
		return (c);
	}
	else
		return (0);
}

int		ft_isblank(int c)
{
	if (c == 9 || c == 32)
	{
		return (c);
	}	
	else
		return (0);
}

int		ft_isspace(int c)
{
	if (c == 32 || (9 <= c && c <= 15))
	{
		return (c);
	}
	else
		return (0);
}

int		ft_isprint(int c)
{
	if (32 <= c && c <= 126)
	{
		return (c);
	}
	else
		return (0);
}

int		ft_iscntrl(int c)
{
	if ((0 <= c && c <= 31) || c == 127)
	{
		return (1);
	}
	else
		return (0);
}

int		ft_isxdigit(int c)
{
	if (isdigit(c) || (65 <= c && c <= 70) || (97 <= c && c <= 102))
	{
		return (c);
	}
	else
		return (0);
}
