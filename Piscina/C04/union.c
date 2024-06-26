typedef union
{
	int hola;
	char hola;
} aaa;


int main ()
{
	int a;
	a = 6;
	write(1, &a, 1); 
}
