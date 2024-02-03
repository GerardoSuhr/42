/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:16:04 by gsuhr             #+#    #+#             */
/*   Updated: 2024/01/20 16:16:11 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"


size_t	ft_strlen(const char *s)
{
	size_t l;

	l = 0;
	while (s[l] != 0)
		l++;
	return (l);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1) + 1;
	if (!(s2 = (char *)malloc(size)))
		return (0);
	i = 0;
	while (i < size)
	{
		((unsigned char *)s2)[i] = ((unsigned char *)s1)[i];
		i++;
	}
	return (s2);
}
