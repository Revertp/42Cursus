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

static void	memfree(char **str, size_t j)
{
	size_t	k;

	k = 0;
	while (k < j)
	{
		free(str[k]);
		k++;
	}
	free(str);
}

static char	**malloc_strings(char const *s, char c, char **words, size_t i)
{
	int		j;
	size_t	start;

	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i ++;
		else
		{
			start = i;
			while (s[i] != c && i < ft_strlen(s))
				i++;
			words[j] = ft_substr(s, start, (start - i));
			if (!words[j])
			{
				memfree(words, j);
				return (NULL);
			}
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

int	main(void)
{
	char const s[] = "1hola1que1tal";
	char c = '1';
	char **t;
	int i;

	t = ft_split(s,c);
	i = 0;
	while(t[i])
	{
		puts(t[i]);
		i++;
	}
}