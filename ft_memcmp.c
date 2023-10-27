/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:54:02 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/24 12:25:20 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	char	*pt1;
	char	*pt2;
	size_t	i;

	pt1 = (char *)p1;
	pt2 = (char *)p2;
	i = 0;
	while (i < size)
	{
		if (pt1[i] != pt2[i])
			return ((unsigned char)pt1[i] - (unsigned char)pt2[i]);
		i++;
	}
	return (0);
}
