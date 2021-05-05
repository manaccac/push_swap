#include "../includes/push_swap.h"

void	ft_rrb(t_global *global)
{
	int i;
	int temp;

	i = global->b->len - 1;
	temp = 0;
	if (global->b->len < 2)
		return ;
	temp = global->b->lst[i];
	while (i != 0)
	{
		global->b->lst[i] = global->b->lst[i - 1];
		i--;
	}
	global->b->lst[0] = temp;
}