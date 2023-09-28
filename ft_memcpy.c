/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:15:20 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/05 11:32:10 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*des2;
	const char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	des2 = dest;
	src2 = (const char *) src;
	while (n > 0)
	{
		*des2 = *src2;
		des2++;
		src2++;
		n--;
	}
	return (dest);
}
