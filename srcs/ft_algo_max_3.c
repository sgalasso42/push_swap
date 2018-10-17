/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_max_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:42:00 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/26 16:32:26 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_algo_max_3(t_pile *pile)
{
	while (!ft_check_pile_a(pile))
	{
		if (pile->numbers_a->nb > pile->numbers_a->next->nb)
		{
			ft_sa(pile);
			ft_putendl("sa");
		}
		else
		{
			ft_rra(pile);
			ft_putendl("rra");
		}
	}
}
