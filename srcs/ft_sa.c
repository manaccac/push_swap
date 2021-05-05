#include "../includes/push_swap.h"

void	ft_sa(t_global *global)
{
	int temp;

	temp = 0;
	if (global->a->len < 2)
		return ;
	else
	{
		temp = global->a->lst[0];
		global->a->lst[0] = global->a->lst[1];
		global->a->lst[1] = temp;
	}
}