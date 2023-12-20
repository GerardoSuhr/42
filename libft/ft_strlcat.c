/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:01:30 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/20 16:29:09 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*src1;

	src1 = (char *)src;
	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen((char *)src));
	j = 0;
	while (src1[j])
	{
		if (j < size - i - 1)
			*dst++ = src1[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}
