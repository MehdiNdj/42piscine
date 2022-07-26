/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnedjar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:32:55 by mnedjar           #+#    #+#             */
/*   Updated: 2022/07/26 01:30:34 by mnedjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	sign = 1;
	while((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= - 1;
		i++;
	}
	n = 0;
	while ((str[i] >= '0') && (str[i] <= '9') && (str[i] != '\0'))
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * sign);
}

int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
}
