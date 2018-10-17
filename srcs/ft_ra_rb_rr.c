/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rb_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 14:15:04 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/22 14:16:29 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_ra(t_pile *pile)
{
	t_plist		*start;
	t_plist		*temp;

	if (!pile->numbers_a || !pile->numbers_a->next)
		return ;
	temp = pile->numbers_a;
	pile->numbers_a = pile->numbers_a->next;
	start = pile->numbers_a;
	while (pile->numbers_a->next)
		pile->numbers_a = pile->numbers_a->next;
	temp->next = 0;
	pile->numbers_a->next = temp;
	pile->numbers_a = start;
}

void	ft_rb(t_pile *pile)
{
	t_plist		*start;
	t_plist		*temp;

	if (!pile->numbers_b || !pile->numbers_b->next)
		return ;
	temp = pile->numbers_b;
	pile->numbers_b = pile->numbers_b->next;
	start = pile->numbers_b;
	while (pile->numbers_b->next)
		pile->numbers_b = pile->numbers_b->next;
	temp->next = 0;
	pile->numbers_b->next = temp;
	pile->numbers_b = start;
}

void	ft_rr(t_pile *pile)
{
	ft_ra(pile);
	ft_rb(pile);
}
