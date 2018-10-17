/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:04:03 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 19:06:54 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sarasarra(t_pile *pile)
{
	ft_sa(pile);
	ft_ra(pile);
	ft_sa(pile);
	ft_rra(pile);
	ft_putendl("sa\nra\nsa\nrra");
}

void	ft_rasarra(t_pile *pile)
{
	ft_ra(pile);
	ft_sa(pile);
	ft_rra(pile);
	ft_putendl("ra\nsa\nrra");
}

void	ft_sort_3(t_pile *pile, int len)
{
	if (len == 3)
	{
		if (pile->numbers_a->nb > pile->numbers_a->next->nb &&
				pile->numbers_a->nb > pile->numbers_a->next->next->nb)
		{
			ft_sarasarra(pile);
			if (pile->numbers_a->nb > pile->numbers_a->next->nb)
			{
				ft_sa(pile);
				ft_putendl("sa");
			}
		}
		else if (pile->numbers_a->next->nb > pile->numbers_a->next->next->nb)
			ft_rasarra(pile);
		if (pile->numbers_a->nb > pile->numbers_a->next->nb)
		{
			ft_sa(pile);
			ft_putendl("sa");
		}
	}
	else if (pile->numbers_a->nb > pile->numbers_a->next->nb)
	{
		ft_sa(pile);
		ft_putendl("sa");
	}
}
