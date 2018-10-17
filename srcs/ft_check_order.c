/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 19:49:09 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/22 17:17:42 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_check_order(t_pile *pile)
{
	t_plist	*start;
	int		temp;

	temp = pile->numbers_a->nb;
	start = pile->numbers_a;
	while (pile->numbers_a)
	{
		if (temp > pile->numbers_a->nb)
		{
			ft_putendl(C_RED"KO"C_NONE);
			return ;
		}
		temp = pile->numbers_a->nb;
		pile->numbers_a = pile->numbers_a->next;
	}
	pile->numbers_a = start;
	if (pile->numbers_b != 0)
	{
		ft_putendl(C_RED"KO"C_NONE);
		return ;
	}
	ft_putendl(C_GREEN"OK"C_NONE);
}
