/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 14:59:52 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/26 16:21:40 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "commands.h"

void					ft_display_pile(t_pile *pile);
int						ft_check_command(char *line);
void					ft_check_order(t_pile *pile);

#endif
