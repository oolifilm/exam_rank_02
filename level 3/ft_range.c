#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	size;
	int	i;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if (start <= end)
			array[i] = start + i;
		else
			array[i] = start - i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int min;
	int max;
	int *tab;
	int i = 0;
	int size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/