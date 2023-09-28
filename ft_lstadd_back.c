/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:08:15 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/28 16:08:16 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*storage;

	storage = *lst;
	if (!lst)
		return (*lst = new);
	while (storage -> next)
		storage = storage -> next;
	storage -> next = new;
}