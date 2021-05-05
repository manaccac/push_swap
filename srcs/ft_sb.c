#include "../includes/push_swap.h"

void	ft_sb(t_global *global)
{
	int temp;

	temp = 0;
	if (global->b->len < 2)
		return ;
	else
	{
		temp = global->b->lst[0];
		global->b->lst[0] = global->b->lst[1];
		global->b->lst[1] = temp;
	}
}