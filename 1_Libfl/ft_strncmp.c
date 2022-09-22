/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:01:51 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 18:30:24 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && (i < n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}

/*
int main () {
   char str1[15];
   char str2[15];
   int ret;

   ft_strlcpy(str1, "abcdefgh", 7);
   ft_strlcpy(str2, "abcdwxyz", 7);

   ret = ft_strncmp(str1, str2, 4);

   if(ret < 0)
	{
      printf("str1 is less than str2");
	}
   else if(ret > 0)
	{
      printf("str2 is less than str1");
	}
   else
    {
	printf("str1 is equal to str2");
	}

   return(0);
}
*/
