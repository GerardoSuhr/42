/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:15:25 by gsuhr             #+#    #+#             */
/*   Updated: 2024/01/20 16:15:36 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
