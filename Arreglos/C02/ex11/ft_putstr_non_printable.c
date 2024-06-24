#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	int	i;
	int	n;
	char hex[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
	
	i = 0;
	while (str[i])
	{
		if(str[i] <= 31 || str[i] == 127)
		{
			n = str[i];
			write(1, "\\", 1);
			write(1, &hex[n / 16], 1);
			write(1, &hex[n % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}