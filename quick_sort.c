#include "header.h"

void	quick_sort(int *ary, ssize_t i_head, ssize_t i_tail)
{
	ssize_t i_border;
	static int ch;

	/*
	puts("**************");
	printf("%d times: head: %d tail: %d\n",ch, i_head, i_tail);
	for (int i = 0; i < 10; i++)
	{
		printf("ary[%d] = %d\n", i,  ary[i]);
	}
	puts("**************");
	ch++;
	*/
	if (i_head >= i_tail)
	{
	// printf("%d times: head: %d tail: %d\n",ch, i_head, i_tail);
		return ;
	}
	i_border = partition(ary, i_head, i_tail);
	quick_sort(ary, i_head, i_border - 1);
	quick_sort(ary, i_border + 1, i_tail);
}

