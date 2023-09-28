/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:44:23 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/08 16:44:26 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long int n)
{
	int	i;

	i = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_write_str(char *converted, int length, long int number, int n)
{
	converted[length] = '\0';
	while (length > 0)
	{
		converted[length - 1] = number % 10 + '0';
		number = number / 10;
		length--;
	}
	if (n < 0)
	{
		converted[0] = '-';
	}
	return (converted);
}

char	*ft_itoa(int n)
{
	char		*converted;
	int			length;
	long int	number;

	length = ft_length(n);
	number = n;
	if (n < 0)
	{
		number = -number;
	}
	converted = (char *)malloc(sizeof(char) * (length + 1));
	if (converted == NULL)
		return (NULL);
	ft_write_str (converted, length, number, n);
	return (converted);
}
