/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:31:12 by areverte          #+#    #+#             */
/*   Updated: 2022/09/25 20:04:29 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_counter(char const *s, char c)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
	}
	return (j);
}

static char	**malloc_strings(char const *s, char c, char **words, size_t i)
{
	int	j;
	int	len;
	int	start;

	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i ++;
		else
		{
			len = 0;
			start = i;
			while (s[i] != c && i < ft_strlen(s))
			{
				i++;
				len++;
			}
			words[j] = ft_substr(s, start, len);
			j++;
		}
	}
	words[j] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**words;

	words = (char **) malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!words)
		return (NULL);
	i = 0;
	return (malloc_strings(s, c, words, i));
}
