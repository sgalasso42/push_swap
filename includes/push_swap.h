/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 17:11:34 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 19:10:04 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "commands.h"

typedef struct	s_layout
{
	int	nb_ints;
	int	random_coef;
	int	average_order;
}				t_layout;

void			ft_layout_study(t_pile *pile, t_layout *layout);
int				ft_check_pile_a(t_pile *pile);
int				ft_check_pile_b(t_pile *pile);
void			ft_algo_max_3(t_pile *pile);
void			ft_algo_max_5(t_pile *pile, t_layout *layout);
void			ft_sort_3(t_pile *pile, int len);
int				ft_calc_med(t_plist *nb_a, int len);
void			ft_algo_quicksort(t_pile *pile, int size, int ascend);
void			ft_select_algo(t_pile *pile, t_layout *layout);

#endif
