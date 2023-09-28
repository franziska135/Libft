/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:07:22 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/07 10:48:18 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	l_dest;
	unsigned int	l_src;
	int				i;

	i = 0;
	l_dest = ft_strlen(dest);
	l_src = ft_strlen(src);
	if (l_dest >= size)
		l_src = size + l_src;
	else
		l_src = l_dest + l_src;
	while (src[i] != '\0' && ((l_dest + 1) < size))
	{
		dest[l_dest] = src[i];
		l_dest++;
		i++;
	}
	dest[l_dest] = '\0';
	return (l_src);
}
