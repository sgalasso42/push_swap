/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:49:40 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/26 16:32:47 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/commands.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		ng;
	long	res;

	i = 0;
	ng = 0;
	res = 0;
	while (nptr[i] && (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		ng = 1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
		res = res * 10 + nptr[i++] - 48;
	res = (ng == 1) ? -res : res;
	if (res > 2147483647 || res < -2147483648)
	{
		write(0, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return (res);
}
