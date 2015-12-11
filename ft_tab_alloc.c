/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:26:42 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/10 14:36:58 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tab_alloc(int l, int c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char**)malloc(sizeof(tab) * l + 1);
	while (i < l)
	{
		tab[i] = ft_strnew(c);
		i++;
	}
	tab[i] = "end_of_tab";
	return (tab);
}
