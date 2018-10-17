/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_sb_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 14:09:09 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/22 14:13:05 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_sa(t_pile *pile)
{
	t_plist		*temp1;
	t_plist		*temp2;
	t_plist		*temp3;

	if (!pile->numbers_a || !pile->numbers_a->next)
		return ;
	temp1 = pile->numbers_a;
	temp2 = pile->numbers_a->next;
	temp3 = pile->numbers_a->next->next;
	pile->numbers_a = temp2;
	pile->numbers_a->next = temp1;
	if (temp3)
		pile->numbers_a->next->next = temp3;
	else
		pile->numbers_a->next->next = 0;
}

void	ft_sb(t_pile *pile)
{
	t_plist		*temp1;
	t_plist		*temp2;
	t_plist		*temp3;

	if (!pile->numbers_b || !pile->numbers_b->next)
		return ;
	temp1 = pile->numbers_b;
	temp2 = pile->numbers_b->next;
	temp3 = pile->numbers_b->next->next;
	pile->numbers_b = temp2;
	pile->numbers_b->next = temp1;
	if (temp3)
		pile->numbers_b->next->next = temp3;
	else
		pile->numbers_b->next->next = 0;
}

void	ft_ss(t_pile *pile)
{
	ft_sa(pile);
	ft_sb(pile);
}
