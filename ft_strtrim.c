/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:49:32 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/25 13:29:57 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str != NULL)
		ft_strlcpy(str, &s1[i], (j - i + 1));
	return (str);
}
