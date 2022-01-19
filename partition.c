typedef struct	s_partition
{
	int	i;
	int	j;
	int x;
}				t_partition;

void	swap_ary_elem(int *a_ptr, int *b_ptr)
{
	int	tmp;

	tmp = *a_ptr;
	*a_ptr = *b_ptr;
	*b_ptr = tmp;
}

int	partition(int *ary, size_t i_head, size_t i_tail)
{
	t_partition index;
	int			pivot;

	index.i = (int)i_head - 1;
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
