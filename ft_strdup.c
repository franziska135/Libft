/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:38:44 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/07 10:49:48 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p_newstr;

	i = 0;
	while (s[i] != '\0')
		i++;
	p_newstr = (char *)malloc((i + 1) * sizeof(char));
	if (p_newstr == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		p_newstr[i] = s[i];
		i++;
	}
	p_newstr[i] = '\0';
	return (p_newstr);
}
