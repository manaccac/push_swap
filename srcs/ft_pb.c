#include "../includes/push_swap.h"

void	ft_pb(t_global *global)
{
	int i;
	int j;

	i = global->b->len + 1;
	j = 0;
	if (global->a->len < 1)
		return ;
	else
	{
		while (i != 0)
		{
			global->b->lst[i] = global->b->lst[i - 1];
			i--;
		}
		if (i == 0)
			global->b->lst[0] = global->a->lst[0];
		global->b->len++;
		while (j != global->a->len - 1)
		{
			global->a->lst[j] = global->a->lst[j + 1];
			j++;
		}
		global->a->len--;
	}
}