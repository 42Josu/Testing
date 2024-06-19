int ft_fibonacci(int index)
{
	int	i[4];

	i[0] = 1;
	i[1] = 0;
	i[2] = 0;
	if (index < 0)
		return (-1);
	while (i[3] <= index)
	{
		i[2] = i[1];
		i[1] = i[0];
		i[0] = (i[0] + i[2]);
		i[3]++;
	}
	return (0);
}
