/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:37:52 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 14:38:03 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int		ft_check_command(char *line)
{
	if (!ft_strequ(line, "sa") && !ft_strequ(line, "sb")
	&& !ft_strequ(line, "ss") && !ft_strequ(line, "pa")
	&& !ft_strequ(line, "pb") && !ft_strequ(line, "ra")
	&& !ft_strequ(line, "rb") && !ft_strequ(line, "rr")
	&& !ft_strequ(line, "rra") && !ft_strequ(line, "rrb")
	&& !ft_strequ(line, "rrr"))
		return (0);
	return (1);
}
