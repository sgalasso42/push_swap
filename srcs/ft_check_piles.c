/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_piles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:38:22 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 14:38:33 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_check_pile_a(t_pile *pile)
{
	t_plist	*start;

	start = pile->numbers_a;
	while (pile->numbers_a->next)
	{
		if (pile->numbers_a->nb > pile->numbers_a->next->nb)
		{
			pile->numbers_a = start;
			return (0);
		}
		pile->numbers_a = pile->numbers_a->next;
	}
	pile->numbers_a = start;
	return (1);
}

int		ft_check_pile_b(t_pile *pile)
{
	t_plist	*start;

	start = pile->numbers_b;
	while (pile->numbers_b->next)
	{
		if (pile->numbers_b->nb > pile->numbers_b->next->nb)
		{
			pile->numbers_b = start;
			return (0);
		}
		pile->numbers_b = pile->numbers_b->next;
	}
	pile->numbers_b = start;
	return (1);
}
