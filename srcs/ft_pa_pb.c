/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 14:13:19 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/22 14:14:45 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_pa(t_pile *pile)
{
	t_plist		*temp1;
	t_plist		*temp2;

	if (!pile->numbers_b)
		return ;
	temp1 = pile->numbers_b;
	temp2 = pile->numbers_a;
	pile->numbers_b = pile->numbers_b->next;
	pile->numbers_a = temp1;
	pile->numbers_a->next = temp2;
}

void	ft_pb(t_pile *pile)
{
	t_plist		*temp1;
	t_plist		*temp2;

	if (!pile->numbers_a)
		return ;
	temp1 = pile->numbers_a;
	temp2 = pile->numbers_b;
	pile->numbers_a = pile->numbers_a->next;
	pile->numbers_b = temp1;
	pile->numbers_b->next = temp2;
}
