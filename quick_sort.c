#include "header.h"

int quick_sort(int *ary, ssize_t i_head, ssize_t i_tail)
{
	ssize_t i_border;

	partition(ary, i_head, i_tail);
	quick_sort(ary, i_head, i_border - 1);
	quick_sort(ary, i_border + 1, i_tail);



}

