/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_max_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:38:40 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 15:21:50 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		*ft_search(t_pile *pile, t_layout *layout, int *tab)
{
	int i;
	int pos;

	pos = 0;
	i = 0;
	while (i < 2)
	{
		pos = 0;
		while (pos < layout->nb_ints)
		{
			if (i == 0 && (pile->numbers_a->nb < tab[i] || pos == 0))
				tab[i] = pile->numbers_a->nb;
			else if (i == 1 && (pile->numbers_a->nb < tab[i] || pos == 0))
			{
				if (pile->numbers_a->nb != tab[0])
					tab[i] = pile->numbers_a->nb;
			}
			ft_ra(pile);
			pos++;
		}
		i++;
	}
	return (tab);
}

void	ft_pbra(t_pile *pile, t_layout *layout, int *tab)
{
	int		pos;

	pos = 0;
	while (pos < layout->nb_ints)
	{
		if (pile->numbers_a->nb == tab[0] || pile->numbers_a->nb == tab[1])
		{
			ft_pb(pile);
			ft_putendl("pb");
		}
		else
		{
			ft_ra(pile);
			ft_putendl("ra");
		}
		pos++;
	}
}

void	ft_algo_max_5(t_pile *pile, t_layout *layout)
{
	int	tab[2];

	ft_search(pile, layout, tab);
	ft_pbra(pile, layout, tab);
	ft_algo_max_3(pile);
	if (pile->numbers_b->nb < pile->numbers_b->next->nb)
	{
		ft_sb(pile);
		ft_putendl("sb");
	}
	ft_pa(pile);
	ft_pa(pile);
	ft_putendl("pa\npa");
}
