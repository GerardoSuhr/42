/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:42:27 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/19 16:05:44 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_isalpha(char a);
int		ft_isdigit(char a);
int		ft_isalnum(char a);
int		ft_isascii(char a);
int		ft_isprint(char a);
int		ft_strlen(char *str);
char	*ft_memset(char *s, int c, int n);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_atoi(char *str);
char	*ft_itoa(int n);

#endif
