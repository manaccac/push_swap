/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:53:50 by manaccac          #+#    #+#             */
/*   Updated: 2021/05/10 16:51:16 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reducechunk_two(t_struct *s, int j, int id)
{
	int	reste;

	reste = s->size_a % s->n_chunk;
	while (j < s->n_chunk)
	{
		if (j == s->n_chunk - 1)
		{
			if (id >= (s->size_a / s->n_chunk) * j && id
				< ((s->size_a / s->n_chunk) * (j + 1)) + reste)
				s->moinchunk[j] += 1;
		}
		else
		{
			if (id >= (s->size_a / s->n_chunk) * j && id
				< (s->size_a / s->n_chunk) * (j + 1))
				s->moinchunk[j] += 1;
		}
		j++;
	}
}

void	reducechunk(t_struct *s)
{
	int	id;
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (s->size_a >= 500)
		s->n_chunk = 11;
	else
		s->n_chunk = 5;
	s->moinchunk = calloc(sizeof(int), s->n_chunk);
	while (i < s->big_size)
	{
		id = find_sorted(s, i);
		reducechunk_two(s, j, id);
		j = 0;
		i++;
	}
}

void	main2(t_struct *s, int i)
{
	s->size_a = s->ac1 - s->a;
	s->max = s->size_a;
	s->size_b = 0;
	i = s->ac1 - s->a - 1;
	if (check_isnum(s->av1, s->ac1, s->a))
		message_free("Error\n", 1, s);
	while (s->a < s->ac1)
	{
		s->list_a[i] = ft_atoi(s->av1[s->a]);
		i--;
		s->a++;
	}
	if (check_doublon(s->size_a, s->list_a))
		message_free("Error\n", 1, s);
	if (s->size_a >= 20)
	{
		create_sort_tab(s);
		big_list(s);
		reducechunk(s);
		create_chunk(s);
		ft_algo_chunk(s);
	}
	else
		while (!is_sorted(s) || s->size_a != s->max)
			ft_while(s);
}

void	main3(int ac, char **av, t_struct *s, int i)
{
	s->size_a = ac - s->a;
	s->max = s->size_a;
	s->size_b = 0;
	i = ac - s->a - 1;
	if (check_isnum(av, ac, s->a))
		message_free("Error\n", 1, s);
	while (s->a < ac)
	{
		s->list_a[i] = ft_atoi(av[s->a]);
		i--;
		s->a++;
	}
	if (check_doublon(s->size_a, s->list_a))
		message_free("Error\n", 1, s);
	if (s->size_a >= 20)
	{
		create_sort_tab(s);
		/*
		int io = 0;
		while (s->sorted[io])
		{
			dprintf(1, "sorted[%d] = %d\n", io, s->sorted[io]);
			io++;
		}
		*/
		big_list(s);
		/*
		int io = 0;
		dprintf(1, "big_list size = %d\n", s->big_size);
		while (s->big_list[io])
		{
			dprintf(1, "big_list[%d] = %d\n", io, s->big_list[io]);
			io++;
		}
		*/
		reducechunk(s);
		/*
		int io = 0;
		dprintf(1, "n_chunk = %d\n", s->n_chunk);
		while (s->moinchunk[io])
		{
			dprintf(1, "moinchunk[%d] = %d\n", io, s->moinchunk[io]);
			io++;
		}
		*/
		create_chunk(s);
		/*
		int io = 0;
		dprintf(1, "n_chunk = %d\n", s->n_chunk);
		while (s->chunk_len[io])
		{
			dprintf(1, "chunk_len[%d] = %d\n", io, s->chunk_len[io]);
			io++;
		}
		int jo;
		io = 0;
		while (s->chunk[io])
		{
			jo = 0;
			while (s->chunk[io][jo])
			{
				dprintf(1, "chunk[%d][%d] = %d\n", io, jo, s->chunk[io][jo]);
				jo++;
			}
			io++;
		}
		
		*/
		ft_algo_chunk(s);
	}
	else
		while (!is_sorted(s) || s->size_a != s->max)
			ft_while(s);
}

int	main(int ac, char **av)
{
	t_struct	s;
	int			i;

	if (ac == 1)
		exit (0);
	i = 0;
	s.push = 1;
	s.a = 1;
	ft_init(ac, av, &s);
	if (ac == 2)
		main2(&s, i);
	else
		main3(ac, av, &s, i);
	ft_free(&s);
	return (0);
}
