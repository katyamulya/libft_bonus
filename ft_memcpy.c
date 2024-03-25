/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdvarako <kdvarako@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:58:40 by kdvarako          #+#    #+#             */
/*   Updated: 2024/03/25 12:10:59 by kdvarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	i = 0;
	p_dest = dest;
	p_src = src;
	while (n > 0)
	{
		p_dest[i] = p_src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		p_dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}