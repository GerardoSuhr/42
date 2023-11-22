/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:22:43 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/22 12:05:44 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (i + s);
}

int	ft_nvalue(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

void	ft_reverse(char *str)
{
	int		i;
	int		len;
	char	temp;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	if (str[0] == '-')
		i = 1;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - j];
		str[len - 1 - j] = temp;
		i++;
		j++;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nn;

	nn = ft_nvalue(n);
	str = (char *)malloc(ft_mag(n) + 2);
	i = 0;
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	while (i < ft_mag(n))
	{
		str[i] = nn % 10 + '0';
		nn = nn / 10;
		i++;
	}
	ft_reverse(str);
	return (str);
}

