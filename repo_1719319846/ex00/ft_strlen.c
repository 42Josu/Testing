/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:13:04 by olalsanc          #+#    #+#             */
/*   Updated: 2024/06/24 09:13:08 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
para emular la función strlen en C, no debes contar el carácter nulo (\0) del
final de la cadena. La función strlen cuenta el número de caracteres 
en la cadena hasta, pero sin incluir, el carácter nulo.

*/

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
/*
int	main(void)
{
	char	*str;
	
	str  = "this is a string";
	printf("Length: %d\n", ft_strlen(str));
	return (0);
}
*/
