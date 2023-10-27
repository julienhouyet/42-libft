/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:29:06 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/27 10:45:31 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	size_t	i;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
			return (a + i);
		i++;
	}
	return (0);
}
