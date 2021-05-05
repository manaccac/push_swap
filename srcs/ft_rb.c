#include "../includes/push_swap.h"

void	ft_rb(t_global *global)
{
	int i;
	int temp;

	i = 1;
	temp = 0;
	if (global->b->len < 2)
		return ;
	temp = global->b->lst[i];
	while (i != global->b->len)
	{
		global->b->lst[i] = global->b->lst[i + 1];
		i++;
	}
	global->b->lst[global->b->len - 1] = global->b->lst[0];
	global->b->lst[0] = temp;
}