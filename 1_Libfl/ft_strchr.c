/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:16:56 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 17:28:40 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	while (*s && *s != letter)
		s++;
	if (*s == letter)
		return ((char *)s);
	else
		return (0);
}
