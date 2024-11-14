#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	return (0);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		sign;
	int		res;
	char	c;
	int		value;

	if (str_base < 2 || str_base > 16)
		return (0);
	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isalnum(str[i]))
	{
		c = ft_tolower(str[i]);
		if (c >= '0' && c <= '9')
			value = c - '0';
		else if (c >= 'a' && c <= 'f')
			value = c - 'a' + 10;
		else
			break ;
		if (value < str_base)
			res = res * str_base + value;
		else
			break ;
		i++;
	}
	return (res * sign);
}

int	main(void)
{
	// Quelques tests pour vérifier que la fonction fonctionne correctement
	printf("%d\n", ft_atoi_base("1A", 16));  // Affiche 26
	printf("%d\n", ft_atoi_base("1011", 2)); // Affiche 11
	printf("%d\n", ft_atoi_base("123", NULL));  // Affiche 83
	printf("%d\n", ft_atoi_base("-7f", 16)); // Affiche -127
	return (0);
}