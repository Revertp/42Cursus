/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:13:31 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 17:22:45 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
	i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char str[] = "tu que ase";
	const char ch = 'q';
	char *ret;

	ret = ft_memchr(str, ch, ft_strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
*/
