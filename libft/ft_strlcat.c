/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:01:30 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/23 17:04:10 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		l;

	i = 0;
	l = strlen(dest);
	while (i < size)
	{
		dest[l + i] = scr[i];
		i++;
	}
	dest[l + i] = '\0';
}


