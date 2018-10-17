/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_layout_study.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:06:46 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 14:23:16 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_calc_random_coef(int a, int b)
{
	int res;

	a = (a * 10) / (a + b);
	b = (b * 10) / (a + b);
	if (a > b)
		res = a - b;
	else
		res = b - a;
	return (res);
}

void	ft_layout_study(t_pile *pile, t_layout *layout)
{
	t_plist	*start;
	int		temp;
	int		croissant;
	int		decroissant;

	start = pile->numbers_a;
	layout->nb_ints = 0;
	temp = 0;
	croissant = 0;
	decroissant = 0;
	while (pile->numbers_a)
	{
		if (layout->nb_ints != 0 && temp < pile->numbers_a->nb)
			croissant++;
		else if (layout->nb_ints != 0)
			decroissant++;
		temp = pile->numbers_a->nb;
		pile->numbers_a = pile->numbers_a->next;
		layout->nb_ints++;
	}
	pile->numbers_a = start;
	layout->average_order = (croissant > decroissant) ? 1 : 0;
	if (layout->nb_ints > 1)
		layout->random_coef = ft_calc_random_coef(croissant, decroissant);
}
