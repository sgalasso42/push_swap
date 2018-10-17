/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:31:34 by sgalasso          #+#    #+#             */
/*   Updated: 2018/06/26 16:29:37 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/commands.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s)
	{
		i = 0;
		if (!(str = (char *)(malloc(sizeof(char) * (len + 1)))))
			return (0);
		while (i < len)
		{
			str[i] = s[start];
			start++;
			i++;
		}
		str[i] = '\0';
		return ((char *)str);
	}
	return (0);
}
