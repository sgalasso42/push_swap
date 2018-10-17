/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 14:52:43 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/26 14:25:46 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

void	ft_get_commands(t_pile *pile, char *line)
{
	int num;

	num = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (!(ft_check_command(line)))
		{
			write(0, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		ft_exec_commands(pile, line);
		free(line);
	}
}

int		main(int argc, char **argv)
{
	t_pile	pile;
	char	*line;

	line = 0;
	if (argc > 1)
	{
		if (ft_parse_pile(argv, &pile))
		{
			if (pile.v == 1)
				ft_display_pile(&pile);
			ft_get_commands(&pile, line);
			ft_check_order(&pile);
			return (0);
		}
		write(0, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
