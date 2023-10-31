/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:06:48 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/31 18:50:34 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static long long int	ft_secure(long long int result, long long int temp, \
int neg)
{
	if (temp > result && neg == -1)
		return (0);
	else if (temp > result && neg == 1)
		return (-1);
	return (result);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long int		result;
	long long int	temp;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		temp = result;
		result = (result * 10) + (str[i] - '0');
		result = ft_secure(result, temp, neg);
		i++;
	}
	return ((int)result * neg);
}
