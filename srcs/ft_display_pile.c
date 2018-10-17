/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_pile.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:08:35 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/22 14:24:10 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_display_pile(t_pile *pile)
{
	t_plist	*temp_a;
	t_plist	*temp_b;

	temp_a = pile->numbers_a;
	temp_b = pile->numbers_b;
	ft_putendl("######################################");
	ft_putendl(" top             <<<              bot ");
	ft_putendl("--------------------------------------");
	ft_putstr("a :");
	while (pile->numbers_a)
	{
		ft_putstr("  ");
		ft_putnbr(pile->numbers_a->nb);
		pile->numbers_a = pile->numbers_a->next;
	}
	ft_putstr("\n\nb :");
	while (pile->numbers_b)
	{
		ft_putstr("    ");
		ft_putnbr(pile->numbers_b->nb);
		pile->numbers_b = pile->numbers_b->next;
	}
	ft_putendl("\n--------------------------------------");
	pile->numbers_a = temp_a;
	pile->numbers_b = temp_b;
}
