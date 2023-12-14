/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:17:06 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/14 18:55:11 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	int	r;

	r = 0;
	if (c == ' ' || (c >= 7 && c <= 13))
		r = 1;
	return (r);
}

static int	ft_sign(char c)
{
	int	r;

	r = 0;
	if (c == '+')
		r = 1;
	else if (c == '-')
		r = -1;
	return (r);
}

int	ft_atoi(char *str)
{
	int	d;
	int	r;
	int	m;
	int	s;

	d = 0;
	r = 0;
	m = 0;
	s = 0;
	while (*str)
	{
		if (ft_isspace(*str) == 1 && m == 0 && d == 0)
			s++;
		else if (ft_sign(*str) != 0 && m == 0 && d == 0)
			m = ft_sign(*str);
		else if (ft_isdigit(*str) == 2048)
		{
			r = r * 10 + *str - '0';
			d++;
		}
		else
			break ;
		str++;
	}
	return (r * m);
}
