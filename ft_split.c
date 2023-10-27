/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:54:56 by jhouyet           #+#    #+#             */
/*   Updated: 2023/10/26 15:59:49 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

static void	ft_strcpy(char *word, char *s, char c, int k)
{
	int	i;

	i = 0;
	while (s[k] != '\0' && s[k] == c)
		k++;
	while (s[k + i] != c && s[k + i] != '\0')
	{
		word[i] = s[k + i];
		i++;
	}
	word[i] = '\0';
}

char static	*ft_get_word(char *s, char c, int *j)
{
	char	*word;
	int		k;

	k = *j;
	word = NULL;
	while (s[*j] != '\0')
	{
		if (s[*j] != c)
		{
			while (s[*j] != '\0' && s[*j] != c)
				*j += 1;
			word = (char *)malloc(sizeof(char) * (*j + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*j += 1;
	}
	ft_strcpy(word, s, c, k);
	return (word);
}

static void	ft_free(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		free(tab);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tabs;
	int		nb_words;
	int		i;
	int		j;

	if (s == NULL)
		return (0);
	i = 0;
	j = 0;
	nb_words = ft_count_words((char *)s, c);
	tabs = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (tabs == NULL)
		return (0);
	while (i < nb_words)
	{
		tabs[i] = ft_get_word((char *)s, c, &j);
		if (tabs[i] == NULL)
		{
			ft_free(tabs[i]);
		}
		i++;
	}
	tabs[nb_words] = NULL;
	return (tabs);
}
