/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_quicksort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:39:33 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 19:09:24 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_pb_sample(t_pile *pile, int med, int len_to_b)
{
	int c;
	int	nb_ra;

	c = 0;
	nb_ra = 0;
	while (c < len_to_b)
	{
		if (pile->numbers_a->nb <= med)
		{
			ft_pb(pile);
			ft_putendl("pb");
			c++;
		}
		else
		{
			ft_ra(pile);
			ft_putendl("ra");
			nb_ra++;
		}
	}
	return (nb_ra);
}

void	ft_pa_sample(t_pile *pile, int len_to_b)
{
	int i;

	i = 0;
	while (i < len_to_b)
	{
		ft_pa(pile);
		ft_putendl("pa");
		i++;
	}
}

void	ft_reorder(t_pile *pile, int ascend, int nb_ra)
{
	int i;

	i = 0;
	if (ascend == 2)
	{
		while (i < nb_ra)
		{
			ft_rra(pile);
			ft_putendl("rra");
			i++;
		}
	}
}

void	ft_algo_quicksort(t_pile *pile, int size, int ascend)
{
	int len_to_b;
	int nb_ra;
	int med;

	med = ft_calc_med(pile->numbers_a, size);
	len_to_b = size / 2 + size % 2;
	size = size / 2;
	nb_ra = ft_pb_sample(pile, med, len_to_b);
	ft_reorder(pile, ascend, nb_ra);
	if (size > 3)
		ft_algo_quicksort(pile, size, ascend);
	else
		ft_sort_3(pile, size);
	ft_pa_sample(pile, len_to_b);
	if (len_to_b > 3)
		ft_algo_quicksort(pile, len_to_b, 2);
	else
		ft_sort_3(pile, len_to_b);
}
