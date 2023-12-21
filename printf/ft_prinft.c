/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:35:14 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/21 19:19:52 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
/*
int	ft_printf(const char *, ...);
{
	Con la cantidad de arguments -1 puedo saber cuantas coincidencias debo buscar.
	Luego debo hacer un array de strings, donde voy guardando los segmentos del string principal intercalado con las variables ya stringificadas.
	Luego recorrer ese array de strings imprimiedolos en la consola.
}
*/

int	main()
{
	char	*str = "Probando printf: %d";
	int		a;

	a = 5;
	printf(str, a, a);
	return (0);
}
