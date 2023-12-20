/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:38:45 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/20 16:24:32 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	sub_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_len = ft_strlen(s + start);
	if (len > sub_len)
		len = sub_len;
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (sub_str == 0)
		return (0);
	ft_memcpy(sub_str, s + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}
