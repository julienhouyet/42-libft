/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:29:06 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/24 11:53:24 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t size)
{
	char	*a;
	size_t	i;

	a = (char *)arr;
	i = 0;
	while (i < size)
	{
		if (a[i] == c)
			return (a + i);
		i++;
	}
	return (0);
}
