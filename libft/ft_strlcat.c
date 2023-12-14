/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:01:30 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/14 18:38:04 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cpy_len;

	if (!dst)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	dst += dst_len;
	size -= dst_len;
	if (src_len >= size)
		cpy_len = size - 1;
	else
		cpy_len = src_len;
	ft_memcpy(dst, src, cpy_len);
	*(dst + cpy_len) = 0;
	return (dst_len + src_len);
}
