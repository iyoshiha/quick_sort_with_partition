#include "header.h"

void	swap_ary_elem(int *a_ptr, int *b_ptr)
{
	int	tmp;

	tmp = *a_ptr;
	*a_ptr = *b_ptr;
	*b_ptr = tmp;
}

int	partition(int *ary, ssize_t i_head, ssize_t i_tail)
{
	t_partition index;
	ssize_t		pivot;

	index.i = i_head - 1;
	index.j = i_head;
	pivot = ary[i_tail];
	while (index.j <= i_tail)
	{
		if (ary[index.j] <= pivot)
		{
			index.i++;
			swap_ary_elem(ary + index.i, ary + index.j);
		}
		index.j++;
	}
	return (index.i);
}
