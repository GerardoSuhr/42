/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:52:47 by gsuhr             #+#    #+#             */
/*   Updated: 2024/01/20 15:52:57 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			print_spec_f_e_g(int *len, t_flags fl, double n)
{
	union u_dbl	dbl;

	dbl.f = n;
	fl.sign = (dbl.bits.sign > 0) ? '-' : '+';
	fl.print_n0 = 1;
	if (fl.point == 0)
		fl.precision = 6;
	if (fl.spe_c == 'f')
		fl = print_spec_f(fl, n);
	if (fl.spe_c == 'e')
		fl = print_spec_e(fl, n);
	if (fl.spe_c == 'g')
	{
		if (fl.point == 1 && fl.precision == 0)
			fl = print_spec_g(fl, n, 1);
		else
			fl = print_spec_g(fl, n, fl.precision);
	}
	print_flags(len, fl);
	if (fl.spe_c == 'e')
		free(fl.d);
	free(fl.a);
}

t_flags			print_spec_f(t_flags fl, double n)
{
	fl.f = (n >= 0) ? n : -n;
	fl.ulli = fl.f;
	fl.a = ft_ftoa_rnd(fl.f, fl.precision, 5);
	if (fl.hash == 1 && fl.point == 1 && fl.precision == 0)
	{
		fl.tmp = ft_strjoin(fl.a, ".");
		free(fl.a);
		fl.a = fl.tmp;
	}
	return (fl);
}

static int		rm_trailing_0s(int precision, char *str)
{
	int		i;

	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (!(str[i] == '0' || str[i] == '.'))
			break ;
		if (str[i] == '.')
		{
			str[i] = '\0';
			break ;
		}
		if (str[i] == '0')
		{
			precision--;
			str[i] = '\0';
		}
	}
	return (precision);
}

t_flags			print_spec_g(t_flags fl, double n, int p)
{
	fl = print_spec_e(fl, n);
	free(fl.a);
	free(fl.d);
	if (p > fl.e_nbr && fl.e_nbr >= -4)
	{
		fl.spe_c = 'f';
		fl.precision = p - (fl.e_nbr + 1);
		fl = print_spec_f(fl, n);
		if (fl.hash == 0 && ft_strchr_01(fl.a, '.') == 1)
			fl.precision = rm_trailing_0s(fl.precision, fl.a);
	}
	else
	{
		fl.spe_c = 'e';
		fl.precision = p - 1;
		fl = print_spec_e(fl, n);
		if (fl.hash == 0 && ft_strchr_01(fl.d, '.') == 1)
			fl.precision = rm_trailing_0s(fl.precision, fl.d);
		free(fl.a);
		fl.a = ft_strjoin(fl.d, fl.e);
	}
	return (fl);
}
