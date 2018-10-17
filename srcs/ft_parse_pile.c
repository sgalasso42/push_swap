/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 15:06:41 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/25 15:48:04 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int		ft_is_sdigit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && ft_isdigit(str[i + 1]))
			i++;
		else if (!ft_isdigit(str[i]) &&
		(str[i] == '-' && !ft_isdigit(str[i + 1])) && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_same(t_pile *pile, int nb)
{
	t_plist	*start;

	start = pile->numbers_a;
	while (pile->numbers_a)
	{
		if (pile->numbers_a->nb == nb)
		{
			pile->numbers_a = start;
			return (1);
		}
		pile->numbers_a = pile->numbers_a->next;
	}
	pile->numbers_a = start;
	return (0);
}

void	ft_lstaddend(t_plist **alst, t_plist *new)
{
	t_plist *temp;

	temp = *alst;
	if (*alst == 0)
	{
		*alst = new;
		(*alst)->next = 0;
		return ;
	}
	while ((*alst)->next)
		*alst = (*alst)->next;
	new->next = 0;
	(*alst)->next = new;
	*alst = temp;
}

int		ft_parse_spile(char **argv, t_pile *pile, t_plist *new, int i)
{
	int j;

	j = ft_nbrlen(new->nb);
	while (argv[i][j])
	{
		if (ft_isdigit(argv[i][j]) ||
		(argv[i][j] == '-' && ft_isdigit(argv[i][j + 1])))
		{
			if (!(new = (t_plist *)(malloc(sizeof(t_plist)))))
				return (0);
			if (ft_is_same(pile, ft_atoi(argv[i] + j)))
				return (0);
			if (ft_atoi(argv[i] + j) > 2147483647 ||
			ft_atoi(argv[i] + j) < -2147483648)
				return (0);
			new->nb = ft_atoi(argv[i] + j);
			ft_lstaddend(&(pile->numbers_a), new);
			j += ft_nbrlen(new->nb);
		}
		else if (argv[i][j] == ' ')
			j++;
		else
			return (0);
	}
	return (1);
}

int		ft_parse_pile(char **argv, t_pile *pile)
{
	t_plist	*new;
	int		i;

	i = 1;
	while (argv[i])
	{
		if (ft_strequ(argv[i], "-v"))
			pile->v = 1;
		else if (ft_is_sdigit(argv[i]))
		{
			if (!(new = (t_plist *)(malloc(sizeof(t_plist)))))
				return (0);
			if (ft_is_same(pile, ft_atoi(argv[i])) ||
			(ft_atoi(argv[i]) > 2147483647 || ft_atoi(argv[i]) < -2147483648))
				return (0);
			new->nb = ft_atoi(argv[i]);
			ft_lstaddend(&(pile->numbers_a), new);
			if (!ft_parse_spile(argv, pile, new, i))
				return (0);
		}
		else
			return (0);
		i++;
	}
	return (1);
}
