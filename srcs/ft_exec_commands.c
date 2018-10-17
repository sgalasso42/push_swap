/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_commands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 19:46:57 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 14:23:08 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_init_fc_tab(t_pile *pile)
{
	pile->fc_tab[0] = &ft_sa;
	pile->fc_tab[1] = &ft_sb;
	pile->fc_tab[2] = &ft_ss;
	pile->fc_tab[3] = &ft_pa;
	pile->fc_tab[4] = &ft_pb;
	pile->fc_tab[5] = &ft_ra;
	pile->fc_tab[6] = &ft_rb;
	pile->fc_tab[7] = &ft_rr;
	pile->fc_tab[8] = &ft_rra;
	pile->fc_tab[9] = &ft_rrb;
	pile->fc_tab[10] = &ft_rrr;
}

void	ft_init_cmd_tab(t_pile *pile)
{
	pile->cmd_tab[0] = "sa";
	pile->cmd_tab[1] = "sb";
	pile->cmd_tab[2] = "ss";
	pile->cmd_tab[3] = "pa";
	pile->cmd_tab[4] = "pb";
	pile->cmd_tab[5] = "ra";
	pile->cmd_tab[6] = "rb";
	pile->cmd_tab[7] = "rr";
	pile->cmd_tab[8] = "rra";
	pile->cmd_tab[9] = "rrb";
	pile->cmd_tab[10] = "rrr";
}

void	ft_exec_commands(t_pile *pile, char *line)
{
	void	(*fc)(t_pile *);
	int		i;
	int		j;

	i = 0;
	ft_init_fc_tab(pile);
	ft_init_cmd_tab(pile);
	j = 0;
	while (!(ft_strequ(line, pile->cmd_tab[j])))
		j++;
	fc = pile->fc_tab[j];
	fc(pile);
	if (pile->v == 1)
		ft_display_pile(pile);
}
