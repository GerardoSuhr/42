/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsuhr <gsuhr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:41:54 by gsuhr             #+#    #+#             */
/*   Updated: 2023/12/14 18:31:47 by gsuhr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	main(void)
{
	int		aa;
	int		bb;

	//To test ft_isalpha
	printf("\n");
	printf("1------------------Testing ft_isalpha()------------------ \n");
	aa = isalpha('a');
	bb = ft_isalpha('a');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
}/*
	printf("\n");
	aa = isalpha('0');
	bb = ft_isalpha('0');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isalpha('A');
	bb = ft_isalpha('A');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isalpha('~');
	bb = ft_isalpha('~');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	//To test ft_isdigit
	printf("2-----------------Testing ft_isdigit()------------------ \n");
	aa = isdigit('0');
	bb = ft_isdigit('0');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isdigit('9');
	bb = ft_isdigit('9');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isdigit('a');
	bb = ft_isdigit('a');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isdigit('-');
	bb = ft_isdigit('-');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	//To test ft_isalnum
	printf("3-----------------Testing ft_isalnum()------------------ \n");
	aa = isalnum('A');
	bb = ft_isalnum('A');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isalnum('0');
	bb = ft_isalnum('0');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isalnum('-');
	bb = ft_isalnum('-');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isalnum('	');
	bb = ft_isalnum('	');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	//To test ft_isascii
	printf("4-----------------Testing ft_isascii()------------------ \n");
	aa = isascii('a');
	bb = ft_isascii('a');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isascii('Z');
	bb = ft_isascii('Z');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isascii('9');
	bb = ft_isascii('9');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isascii(' ');
	bb = ft_isascii(' ');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	//To test ft_isprint
	printf("5------------------Testing ft_isprint()------------------ \n");
	aa = isprint('a');
	bb = ft_isprint('a');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isprint(' ');
	bb = ft_isprint(' ');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isprint('	');
	bb = ft_isprint('	');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = isprint('/');
	bb = ft_isprint('/');
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	//To test ft_strlen
	printf("6------------------Testing ft_strlen()------------------ \n");
	aa = strlen("");
	bb = ft_strlen("");
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = strlen("a");
	bb = ft_strlen("a");
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = strlen("asdsas");
	bb = ft_strlen("asdsas");
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	aa = strlen("asdasd\n\n255");
	bb = ft_strlen("asdasd\n\n255");
	printf("\n");
	printf("Actual function: %d\n", aa);
	printf("  My   function: %d\n", bb);
	printf("\n");
	//To test ft_substr
	printf("------------------Testing ft_substr()------------------ \n");
	char *o = "Hello World";
	printf("%s\n", o);
	char *p = ft_substr(o, 0, 5);
	printf("My   function: %s\n", p);
	printf("------------------Testing ft_strjoin()------------------ \n");
	char *q = "Hello";
	printf("%s\n", q);
	char *r = "World";
	printf("%s\n", r);
	char *s = ft_strjoin(q, r);
	printf("My   function: %s\n", s);
	printf("------------------Testing ft_atoi()------------------ \n");
	printf("String: %s\n", "-14554z5");
	printf("Number: %d\n", atoi("-14554z5"));
	printf("\n");
	printf("String: %s\n", "  +28554a5");
	printf("Number: %d\n", ft_atoi("  +28554a5"));
	printf("\n");
	printf("------------------Testing ft_itoa()------------------ \n");
	printf("Number: %d\n", -145545);
	printf("String: %s\n", ft_itoa(-145545));
	printf("\n");
	printf("Number: %d\n", 85545);
	printf("String: %s\n", ft_itoa(85545));
	printf("\n");
	return (0);
}
*/
