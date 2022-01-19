typedef struct	s_partition
{
	int	i;
	int	j;
	int x;
}				t_partition;

void	swap_ary_elem(int *a_ptr, int *b_ptr);
int	partition(int *ary, ssize_t i_head, ssize_t i_tail);
int quick_sort(int *ary, ssize_t i_head, ssize_t i_tail);
