/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_med.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 19:07:07 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 19:09:15 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		ft_calc_up_down(t_plist *start, int len, int cur)
{
	t_plist		*temp;
	int			pos2;
	int			c;

	pos2 = 0;
	c = 0;
	temp = start;
	while (pos2 < len)
	{
		if (temp->nb > cur)
			c--;
		else if (temp->nb <= cur)
			c++;
		temp = temp->next;
		pos2++;
	}
	return (c);
}

int		ft_calc_med(t_plist *nb_a, int len)
{
	t_plist	*start;
	int		cur;
	int		c;
	int		pos1;

	c = 0;
	pos1 = 0;
	start = nb_a;
	while (pos1 < len)
	{
		cur = nb_a->nb;
		c = ft_calc_up_down(start, len, cur);
		if (len % 2 == c)
			return (cur);
		nb_a = nb_a->next;
		pos1++;
	}
	return (0);
}
