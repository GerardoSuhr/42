/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:52:24 by gsuhr             #+#    #+#             */
/*   Updated: 2023/11/17 17:30:24 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char a)
{
	int	r;

	r = 0;
	if ((a >= '0' && a <= '9'))
		r = 2048;
	return (r);
}
