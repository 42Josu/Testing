#include <unistd.h>
#include <stdio.h>

int	main(int argsnum, char **strar)
{
	int	i;
	int	n;
	
	i = 0;
	n = 1;
	while (n < argsnum)
	{
		while (strar[n][i])
		{
			write(1, &strar[n][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		n++;
	}
	return (1);
}