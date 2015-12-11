/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 12:33:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/10 16:21:46 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list*)malloc(sizeof(new))) == NULL)
		return (NULL);
	if (content == 0)
	{
		new->content = NULL;
		new->content_size = 0;
		return (new);
	}
	if ((new->content = (void*)malloc(content_size)) == NULL)
		return (NULL);
	new->content = (void*)content;
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
