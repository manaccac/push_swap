#include "../includes/push_swap.h"

void	ft_rra(t_global *global)
{
	int i;
	int temp;

	i = global->a->len - 1;
	temp = 0;
	if (global->a->len < 2)
		return ;
	temp = global->a->lst[i];
	while (i != 0)
	{
		global->a->lst[i] = global->a->lst[i - 1];
		i--;
	}
	global->a->lst[0] = temp;
}