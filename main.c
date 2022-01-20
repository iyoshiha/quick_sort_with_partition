#include "libft.h"
#include "header.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int *ary;
	int border;
	int len;
	int index;

	scanf("%d", &len);
	index = len -1;
	ary = malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++)
		scanf("%d", &ary[i]);
	// border = partition(ary, 0, index);
	quick_sort(ary, 0, len -1);
	for (int i = 0; i < len; i++)
	{
		printf("%d", ary[i]);
		printf(" ");
	}
	free(ary);
	return (0);
}
