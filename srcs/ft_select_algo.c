/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 18:24:51 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 14:23:40 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_select_algo(t_pile *pile, t_layout *layout)
{
	if (ft_check_pile_a(pile))
		return ;
	else if (layout->nb_ints <= 3)
		ft_algo_max_3(pile);
	else if (layout->nb_ints <= 5)
		ft_algo_max_5(pile, layout);
	else
		ft_algo_quicksort(pile, layout->nb_ints, 1);
}
