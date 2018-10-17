/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 16:00:07 by sgalasso          #+#    #+#             */
/*   Updated: 2018/10/17 12:55:08 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_free_piles(t_pile *pile)
{
	t_plist *temp;

	while (pile->numbers_a)
	{
		temp = pile->numbers_a;
		pile->numbers_a = pile->numbers_a->next;
		free(temp);
	}
	free(pile->numbers_a);
	while (pile->numbers_b)
	{
		temp = pile->numbers_b;
		pile->numbers_b = pile->numbers_b->next;
		free(temp);
	}
	free(pile->numbers_b);
}

int		main(int argc, char **argv)
{
	t_pile		pile;
	t_layout	layout;

	if (argc > 1)
	{
		if (ft_parse_pile(argv, &pile))
		{
			ft_layout_study(&pile, &layout);
			ft_select_algo(&pile, &layout);
			ft_free_piles(&pile);
			return (0);
		}
		write(0, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
