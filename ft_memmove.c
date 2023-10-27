/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:11:00 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/24 09:23:00 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char	*d;
	char	*s;
	char	*tmp;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	tmp = (char *)malloc(sizeof(char) * size);
	i = 0;
	if (size == 0)
		return (d);
	while (i < size)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		d[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (d);
}
