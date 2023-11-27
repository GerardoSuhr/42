/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:34:25 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/27 15:37:44 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	r;

	r = 0;
	if (((char)c >= 'A' && (char)c <= 'Z')
		|| ((char)c >= 'a' && (char)c <= 'z'))
		r = 1024;
	return (r);
}
