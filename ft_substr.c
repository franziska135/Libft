/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:31:22 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/15 13:45:43 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p_string;
	size_t			length;

	i = 0;
	length = 0;
	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	length = ft_strlen(s + start);
	if (len < length)
		length = len;
	p_string = (char *)malloc(sizeof(char) * (length + 1));
	if (p_string == NULL)
		return (NULL);
	while (i < length && s[start + i] != '\0')
	{
		p_string[i] = s[start + i];
		i++;
	}
	p_string[i] = '\0';
	return (p_string);
}
