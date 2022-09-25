/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:54:45 by areverte          #+#    #+#             */
/*   Updated: 2022/09/25 20:03:12 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int n)
{
	return (n < 0);
}

static int	check_magnitude(int n)
{
	int	j;

	j = 0;
	if (ft_isnegative(n))
		j++;
	if (n == 0)
		j++;
	while (n != 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nl;

	nl = n;
	len = check_magnitude(n);
	str = (char *) malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (ft_isnegative(n))
	{
		str[0] = '-';
		nl = -nl;
	}
	str[len] = 0;
	if (nl == 0)
		str[0] = '0';
	while (nl != 0)
	{
		str[len - 1] = (nl % 10) + '0';
		nl = nl / 10;
		len --;
	}
	return (str);
}
/*
int	main(void)
{
	puts(ft_itoa(-122));
}
*/
