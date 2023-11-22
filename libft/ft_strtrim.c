/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:23:39 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/22 14:27:55 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	findchar(char c, char *str, int l)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < l)
	{
		if (str[i] == c)
			r = 1;
		i++;
	}
	return (r);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	str = (char *)malloc(ft_strlen(s1));
	i = 0;
	j = 0;
	while (set[i])
	{
		if (findchar(set[i], s1, ft_strlen(set)) == 1)
			j = 1;
		i++;
	}
	return (str);
}
