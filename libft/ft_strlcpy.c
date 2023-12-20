/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:50:07 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/20 16:29:29 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		src_len;
	const char	*ptr;

	i = 0;
	ptr = src;
	src_len = 0;
	while (*src)
	{
		src_len++;
		src++;
	}
	if (size == 0)
		return (src_len);
	src = ptr;
	while (i < size - 1 && i < src_len)
	{
		*dst = *src;
		i++;
		src++;
		dst++;
	}
	*dst = '\0';
	return (src_len);
}
