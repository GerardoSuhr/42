/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:23:39 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/14 18:57:59 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	ft_memcpy(dst, src, len);
	if (len > src_len)
		ft_bzero(dst + src_len, len - src_len);
	return (dst);
}

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

static char	*find_end(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		while (*str && !ft_isspace(*str))
			str++;
		ret = str;
		while (ft_isspace(*str))
			str++;
	}
	return (ret);
}

char	*ft_strtrim(char const *s)
{
	char	*start;
	char	*end;
	char	*ret;
	size_t	len;

	if (!s)
		return ((void *)0);
	while (ft_isspace(*s))
		s++;
	start = (char *)s;
	end = find_end(start);
	len = end - start;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return ((void *)0);
	ft_strncpy(ret, start, len);
	ret[len] = 0;
	return (ret);
}
