/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:08:44 by gsuhr             #+#    #+#             */
/*   Updated: 2024/01/27 17:25:26 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define READL_OK 1
# define EOF_RCHD 0
# define ERR_HPND -1

# define NO_ENDLINE 0
# define FOUND_ENDLINE 1

int		get_next_line(int fd, char **line);

/*
** Utils
*/

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

#endif
