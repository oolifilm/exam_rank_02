#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	is_prime(int num)
{
	int	i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = ft_atoi(av[1]);
		int sum = 0;
		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
	}
	if (ac != 2)
		put_nbr(0);
	write(1, "\n", 1);
	return (0);
}
