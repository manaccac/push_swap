#include "../includes/push_swap.h"

void	ft_ra(t_global *global)
{
	int i;
	int temp;

	i = 1;
	temp = 0;
	if (global->a->len < 2)
		return ;
	temp = global->a->lst[i];
	while (i != global->a->len)
	{
		global->a->lst[i] = global->a->lst[i + 1];
		i++;
	}
	global->a->lst[global->a->len - 1] = global->a->lst[0];
	global->a->lst[0] = temp;
}