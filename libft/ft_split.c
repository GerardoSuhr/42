/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:45:30 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/20 16:27:11 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			word_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

static void	ft_fill_space(char **to_fill, char const *original, char separator)
{
	char		**tab1;
	char const	*temp;

	temp = original;
	tab1 = to_fill;
	while (*temp)
	{
		while (*original == separator)
			++original;
		temp = original;
		while (*temp && *temp != separator)
			++temp;
		if (*temp == separator || temp > original)
		{
			*tab1 = ft_substr(original, 0, temp - original);
			original = temp;
			++tab1;
		}
	}
	*tab1 = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count +1));
	if (result == NULL)
		return (NULL);
	ft_fill_space(result, s, c);
	return (result);
}
