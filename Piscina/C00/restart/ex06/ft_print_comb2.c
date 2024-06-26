#include <unistd.h>

void escribir(char *k)
{
	while(k[2] <= '9')
	{
		if(k[3] > '9')
		{
			k[2]++;
			k[3] = '0';
			if(k[2] > '9')
				break;
		}
		write(1, &k[0], 1);
		write(1, &k[1], 1);
		write(1, " ", 1);
		write(1, &k[2], 1);
		write(1, &k[3], 1);
		if(k[0] != '9' || k[1] != '8' || k[2] != '9' || k[3] != '9')
			write(1, ", ", 2);
		k[3]++;
	}
	
}

void ft_print_comb2()
{
	char	k[4];
	
	k[0] = '0';
	k[1] = '0';
	while(k[0] <= '9')
	{
		k[2] = k[0];
		k[3] = k[1] + 1;
		escribir(k);
		k[1]++;
		if(k[1] > '9')
		{
			k[0]++;
			k[1] = '0';
		}
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return (1);
}*/