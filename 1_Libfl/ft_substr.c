/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:50:45 by areverte          #+#    #+#             */
/*   Updated: 2022/09/22 17:55:47 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
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
/*
int main()
{
	char src[] = "substr function Implementation";
	int m = 7;
	int n = 12;

	char* dest = ft_substr(src, m, n);
	printf("%s\n", dest);

	return (0);
}
*/
