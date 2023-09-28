/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:26:57 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/07 10:35:46 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*haystack;
	char			to_find;

	i = 0;
	haystack = (char *) s;
	to_find = (char) c;
	while (i < n)
	{
		if (haystack[i] == to_find)
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
