/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areverte <areverte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:39:18 by areverte          #+#    #+#             */
/*   Updated: 2022/09/21 17:19:05 by areverte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	new;
	int	i;
	int	j;

	j = 1;
	i = 0;
	new = 0;
	while (str[i] == ' ' || ((str[i] >= '\t') && (str[i] <= '\r')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		new = str[i] - '0' + (new * 10);
		if (str[i + 1] < '0' || str[i +1] > '9')
			break ;
		i++;
	}
	return (new * j);
}
