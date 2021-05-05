#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	// pourquoi pas mettre une variable dans la struct nommé checker si elle est activer alors
	t_global global;
	(void)argc;


	global = ft_parsing(argv);
	global.b->len = 0;

//	ft_sa(&global);
//	ft_sb(&global);
//	ft_ss(&global);
	ft_pb(&global);
	ft_pb(&global);
	ft_rrr(&global);

	//verif de a et de res
	int x = 0;
	while (x != global.a->len)
	{
		dprintf(1, "a = [%d]\n", global.a->lst[x]);
		x++;
	}
	x = 0;
	dprintf(1, "\n");
	while (x != global.b->len)
	{
		dprintf(1, "b = [%d]\n", global.b->lst[x]);
		x++;
	}
}