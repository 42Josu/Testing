/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:15:16 by olalsanc          #+#    #+#             */
/*   Updated: 2024/06/24 09:15:20 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
- write(1, "-2147483648", 11); porque el nINT_MIN no se puede transformar 
a positivo como el resto de negativos.

- si es negativo print del signo negativo y lo transformamos 
a positivo para luego trabajarlo

- si es igual o mayor de 10 llamamos recursivamente a la función 
ft_putnbr(nb/10); Esto divide nb por 10 y llama a la función nuevamente con el 
cociente. i tenemos 123 nos vamos quedando con el 3. luego el 2 y por ultimo
el 1. realiza todos las llamadas recursivas hasta que ya no tiene ninguna 
y luego va printeando, por eso que lo saca en orden pese a que se va quedando
con los digitos de atras hacia delante.
- Con number despuesde todos los if trabaja los dijito del 0 al 9. Se ejecuta 
después de que cualquier número mayor o igual a 10 haya sido descompuesto 
en sus dígitos individuales a través de recursión.

nb = -nb; y nb *= -1; es lo mismo porque cuando haces lo primero estas 
multiplicando por -1 y con eso inviertes los signos.
*/
void	ft_putnbr(int nb)
{
	char	number;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	number = nb % 10 + '0';
	write(1, &number, 1);
}
/*
int	main(void)
{
	int	num;

	num = -9855;
	ft_putnbr(num);
}
*/
