/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:00:44 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 21:05:12 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char str[] = "teste";

	const char ch = 'e';
	char *ret;
	ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}
*/
