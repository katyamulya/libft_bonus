/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:06:01 by kdvarako          #+#    #+#             */
/*   Updated: 2024/03/25 12:19:40 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rowscount(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i] != '\0' && i < ft_strlen(s))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (i < ft_strlen(s))
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*ft_strndup(const char *str, size_t n)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (NULL);
	while (i < n && str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		rows;
	int		k;
	int		i;
	int		j;
	char	**p;

	rows = ft_rowscount(s, c);
	p = (char **)malloc((rows + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	k = 0;
	i = 0;
	j = 0;
	while (k < rows)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		p[k] = ft_strndup((s + j), (i - j));
		k++;
	}
	p[k] = NULL;
	return (p);
}
