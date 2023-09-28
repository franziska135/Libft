/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:25:59 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/15 13:54:04 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p_last_position;

	p_last_position = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			p_last_position = s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return ((char *)s);
	else
		return ((char *)p_last_position);
}
