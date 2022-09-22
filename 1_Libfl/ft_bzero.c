/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:18:10 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 17:20:07 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	c = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char e[] = "Hola";
	ft_bzero(e, 2);
	printf("%c",e[2]);
	puts(e);
}
*/
