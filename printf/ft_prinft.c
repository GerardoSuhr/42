/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:35:14 by gsuhr             #+#    #+#             */
/*   Updated: 2024/01/13 15:30:54 by gsuhr            ###   ########.fr       */
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
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	var_counter(*char	str)
{
	int	i;
	int	c;


}


int	main()
{
	char	*str = "Probando printf: %d, %d, %d";
	int		a;
	int		b;
	a = 5;
	b = 1;
	printf(str, b, a, b , a);
	return (0);
}
