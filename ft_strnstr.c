/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:25:39 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/24 12:37:19 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2 == NULL || s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && i + j < len)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
