/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:54:13 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/20 16:22:14 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*first_char;

	first_char = (char *)s;
	while (*s)
		s++;
	while (first_char <= s)
	{
		if (*s == (unsigned char) c)
			return ((char *) s);
		s--;
	}
	if (c == 0)
		return (NULL);
	return (NULL);
}
