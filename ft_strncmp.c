/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:22:14 by kdvarako          #+#    #+#             */
/*   Updated: 2024/03/25 12:30:04 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
	{
		i++;
	}
	if (i >= n)
		i--;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
