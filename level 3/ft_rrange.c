#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *array;
	int size;
	int i;

	if(start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return NULL;
	while( i < size)
	{
		if (start <= end)
			array[i] = end - i;
		else
			array[i] = end + i;
		i++;
	}
	return (array);
}