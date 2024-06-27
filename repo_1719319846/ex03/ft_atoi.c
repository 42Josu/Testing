/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:15:40 by olalsanc          #+#    #+#             */
/*   Updated: 2024/06/24 09:15:43 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Quitar espacios iniciales
- Mirar cuantos signos de menos tiene para saber si el numero sera 
positivo o negativo. Si el número de signos - es impar, el número resultante
será negativo; si es par o no hay signos -, el número será positivo.
- Recoger los primeros numeros hasta encontrarse on oto caracterno numerico.
- Detener la lectura cuando encuentres un carácter que no sea un dígito
- Aplica el signo - o + al número entero construido y devuelve este número.

Construcción del número: num = num * 10 + (*str - '0');
Considera que str apunta a la cadena "123":
Tercer carácter ('3'):
num = num * 10 + (*str - '0')
num = 12 * 10 + ('3' - '0')
num = 120 + 3
num = 123
str ahora apunta al siguiente carácter, que no es un dígito.

return (num * sign); se formula asi porque multiplicas el num por 1 o -1 
y hacer la conversion al signo que tiene que tener. 
Por ejemplo return 1234 * (-1); devolveria -1234
*/

#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str && *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
/* pasando argumento desde la terminal: ./a.out " ---+--+1234ab567"
int	main(int argc, char *argv[])
{
	char	*str;
	int	result;

	if (argc != 2)
		return (1);
	str = argv[1];
	result = ft_atoi(str);
	printf("result: %d\n", result);
}
*/
/*
int	main(void)
{
	char	str[] = " ---+--+1234ab567";
	printf("result: %d\n",ft_atoi(str));
	return (0);
}
*/
