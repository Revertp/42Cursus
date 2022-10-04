/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:31:12 by areverte          #+#    #+#             */
/*   Updated: 2022/10/04 15:22:40 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
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

static char	*ft_substrr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (ft_strlen(s) > (start + j) && j < len)
		j++;
	dest = (char *)malloc(sizeof(char) * (j + 1));
	if (!dest)
		return (NULL);
	while (i < j)
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static char *malloc_strings(char const *s, char c, int j, int i)
char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		start;
	int		len;
	char	**words;

	words = (char **) malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!words)
		return (NULL);
	i = 0;
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
			words[j] = ft_substrr(s, start, len);
			j++;
		}
	}
	words[j] = 0;
	return (words);
}


static int	ft_is_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_is_charset(*str, charset) == 1)
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

static char	*ft_strdupp(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char		**dest;
	int			size;
	int			i;
	int			j;
	char		charset[2];

	charset[0] = c;
	charset[1] = '\0';
	i = 0;
	size = ft_wordcount((char *)s, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_is_charset((char)*s, charset))
			s++;
		j = ft_wordlen((char *)s, charset);
		dest[i] = ft_strdupp((char *)s, j);
		s += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
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
*/
