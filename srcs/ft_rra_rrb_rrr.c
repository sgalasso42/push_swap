/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_rrb_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 14:16:47 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/22 14:18:38 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_rra(t_pile *pile)
{
	t_plist		*start;
	t_plist		*temp;

	if (!pile->numbers_a || !pile->numbers_a->next)
		return ;
	temp = pile->numbers_a;
	while (pile->numbers_a->next->next)
		pile->numbers_a = pile->numbers_a->next;
	start = pile->numbers_a->next;
	pile->numbers_a->next = 0;
	pile->numbers_a = start;
	pile->numbers_a->next = temp;
}

void	ft_rrb(t_pile *pile)
{
	t_plist		*start;
	t_plist		*temp;

	if (!pile->numbers_b || !pile->numbers_b->next)
		return ;
	temp = pile->numbers_b;
	while (pile->numbers_b->next->next)
		pile->numbers_b = pile->numbers_b->next;
	start = pile->numbers_b->next;
	pile->numbers_b->next = 0;
	pile->numbers_b = start;
	pile->numbers_b->next = temp;
}

void	ft_rrr(t_pile *pile)
{
	ft_rra(pile);
	ft_rrb(pile);
}
