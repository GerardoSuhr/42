/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:22:43 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/18 18:00:44 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_mag(int n)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		s = 1;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i+s);
}

int	ft_nvalue(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nn;

	nn = ft_nvalue(n);
	str = (char *)malloc(ft_mag(n) + 1);
	i = 0;
	if (!str)
	{
		return (NULL);
		i = 1;
	}
	if (n > 0)
		str[0] = '-';
	while (i < ft_mag(n))
	{
		str[ft_mag(n) - i - 1] = nn % 10 + '0';
		nn = nn / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}


int	main(void)
{
	int a = -25;
	char *s = ft_itoa(a);
	printf("My function: %s\n", s);
	return (0);
}

/*

int	ft_mag(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	char	*str;
	int		c;
	int		i;

	c = 1;
	i = ft_mag(n);
	if (n < 0)
	{
		c = -1;
		n = -n;
		str = (char *)malloc(i + 2);
		str[0] = '-';
	}
	else
		str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	while (i >= 0)
	{
		str[i - 1] = n % 10;
		n = n / 10;
		i--;
	}
	str[i]= '\0';
	return (str);
}
*/
