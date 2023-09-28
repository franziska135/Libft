/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:43:33 by fmarggra          #+#    #+#             */
/*   Updated: 2023/09/15 13:47:22 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **matrix, int j)
{
	while (j > 0)
		free(matrix[--j]);
	free(matrix);
	return (NULL);
}

static int	ft_amt_words(const char *s, char c)
{
	int	i;
	int	old_i;
	int	words;
	int	len;

	i = 0;
	words = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (i < len && s[i] == c)
			i++;
		old_i = i;
		while (i < len && s[i] != c)
			i++;
		if (i > old_i)
			words += 1;
	}
	return (words);
}

static size_t	ft_index(const char *s, char c, size_t i)
{
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		j;

	j = 0;
	i = 0;
	matrix = malloc((ft_amt_words(s, c) + 1) * sizeof(char *));
	if (!s || !matrix)
		return (NULL);
	while (j < ft_amt_words(s, c))
	{
		while (s[i] == c)
			i++;
		matrix[j] = ft_substr(s, i, ft_index(s, c, i) - i);
		if (!matrix[j])
			return (ft_free(matrix, j));
		i = ft_index(s, c, i) + 1;
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}
