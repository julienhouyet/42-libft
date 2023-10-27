/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:11:00 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/27 10:40:40 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*tmp;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	tmp = (char *)malloc(sizeof(char) * len);
	i = 0;
	if (len == 0)
		return (d);
	while (i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		d[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (d);
}
