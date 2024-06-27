/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenbeita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 18:21:36 by jenbeita          #+#    #+#             */
/*   Updated: 2024/06/24 18:21:38 by jenbeita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	tururu(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (str[i - 1])
		{
			if ((str[i - 1] < 48 || str[i - 1] > 57) &&
				(str[i - 1] < 65 || str[i - 1] > 90) &&
				(str[i - 1] < 97 || str[i - 1] > 122))
			{
				str[i] -= 32;
			}
		}
		else
		{
			str[i] -= 32;
		}
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
		if (str[i - 1])
			if (((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
				str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		tururu(str, i);
		i++;
	}
	return (str);
}
