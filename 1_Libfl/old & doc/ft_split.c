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
/*
static size_t	lookingc(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (c == s[i])
			i++;
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static void	forfree(char **str, size_t i)
{
	size_t	k;

	k = 0;
	while (k < i)
	{
		free(str[k]);
		k++;
	}
	free(str);
}

static char	**makewords(char **str, char const *s, char c, size_t k)
{
	size_t	start;
	size_t	i;

	i = 0;
	while (i < lookingc(s, c))
	{
		if (c == s[k])
			k++;
		else
		{
			start = k;
			while (s[k] && s[k] != c)
				k++;
			str[i] = ft_substr(s, start, (k - start));
			if (!str[i])
			{
				forfree(str, i);
				return (NULL);
			}
			i++;
		}
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	k;
	char	**str;

	str = (char **) malloc ((lookingc(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	k = 0;
	str = makewords(str, s, c, k);
	if (!str)
		return (NULL);
	return (str);
}


/*static	int	word_counter(char const *s, char c)
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

static void	memfree(char **str, size_t i)
{
	size_t	k;

	k = 0;
	while (k < i)
	{
		free(str[k]);
		k++;
	}
	free(str);
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
			if (!str[j])
			{
				memfree(str, j);
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
*/