#include <unistd.h>
#include <stdio.h>

int	main(int argsnum, char **strar)
{
	int	i;
	
	i = 0;
	if(argsnum <= 0)
		return (0);
	while (strar[0][i] !='\0')
	{
		write(1, &strar[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (1);
}