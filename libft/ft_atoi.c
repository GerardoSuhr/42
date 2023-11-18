/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:17:06 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/17 18:54:22 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace1(char c)
{
	int	r;

	r = 0;
	if (c == ' ' || (c >= 7 && c <= 13))
		r = 1;
	return (r);
}

int	ft_sign1(char c)
{
	int	r;

	r = 0;
	if (c == '+')
		r = 1;
	else if (c == '-')
		r = -1;
	return (r);
}

int	ft_isdigit1(char a)
{
	int	r;

	r = 0;
	if ((a >= '0' && a <= '9'))
		r = 2048;
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
		if (ft_isspace1(*str) == 1 && m == 0 && d == 0)
			s++;
		else if (ft_sign1(*str) != 0 && m == 0 && d == 0)
			m = ft_sign1(*str);
		else if (ft_isdigit1(*str) == 2048)
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
