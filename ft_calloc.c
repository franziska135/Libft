/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:36:46 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/15 13:49:00 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*p_memory;
	long int	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_size = (nmemb * size);
	if (total_size > 2147483647)
		return (NULL);
	p_memory = malloc(nmemb * size);
	if (p_memory == NULL)
		return (NULL);
	ft_bzero(p_memory, (nmemb * size));
	return (p_memory);
}
